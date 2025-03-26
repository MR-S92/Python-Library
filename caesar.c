#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // command line argument
    if (argc != 2)
    {
        printf("Usage: ./caeasar key\n");
        return 1;
    }

    // checking characters arg
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // atoi convert a string to an int
    int k = atoi(argv[1]);

    char plaintext[1000];
    printf("plaintext:");
    fgets(plaintext, sizeof(plaintext), stdin);

    if (plaintext[strlen(plaintext) - 1] == '\n')
    {
        plaintext[strlen(plaintext) - 1] = '\0';
    }

    printf("ciphertext:");

    // character encrption
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            // encrypted formula
            char base = isupper(c) ? 'A' : 'a';
            char encrypted = ((c - base + k) % 26) + base;
            printf("%c", encrypted);
        }
        else
        {
            // symbols
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}
