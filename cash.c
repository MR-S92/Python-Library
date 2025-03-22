#include <cs50.h>
#include <stdio.h>

// Fuctions to calculate coins
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);

int main(void)

// goal is to minimize the amount of coins/change.
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int total_coins = 0;

    int quarters = calculate_quarters(cents);
    cents -= quarters * 25;
    total_coins += quarters;

    int dimes = calculate_dimes(cents);
    cents -= dimes * 10;
    total_coins += dimes;

    int nickles = calculate_nickles(cents);
    cents -= nickles * 5;
    total_coins += nickles;

    int pennies = calculate_pennies(cents);
    cents -= pennies * 1;
    total_coins += pennies;

    // total number of coins
    printf("%i\n", total_coins);

    return 0;
}
// Quarter calculation
int calculate_quarters(int cents)
{
    int num_quarters = 0;
    while (cents >= 25)
    {
        num_quarters++;
        cents = cents - 25;
    }
    return num_quarters;
}
// Dimes calculation
int calculate_dimes(int cents)
{
    int num_dimes = 0;
    while (cents >= 10)
    {
        num_dimes++;
        cents = cents - 10;
    }
    return num_dimes;
}
// Nickles calculation
int calculate_nickles(int cents)
{
    int num_nickles = 0;
    while (cents >= 5)
    {
        num_nickles++;
        cents = cents - 5;
    }
    return num_nickles;
}
// Pennies calculation
int calculate_pennies(int cents)
{
    int num_pennies = 0;
    while (cents >= 1)
    {
        num_pennies++;
        cents = cents - 1;
    }
    return num_pennies;
}
