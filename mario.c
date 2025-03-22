#include <cs50.h>
#include <stdio.h>

int main(void)
// Ask the user for the height.

{
    int height, row, column, space;
    do
    {
        height = get_int("Height: "); // get_int is used to prompt the user.
    }
    while (height < 1 || height > 10); // limits
    for (row = 0; row < height; row++) // the loop runs as long as row is less than height.
    {
        for (space = 0; space < height - row - 1; space++)
            printf(" ");

        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
