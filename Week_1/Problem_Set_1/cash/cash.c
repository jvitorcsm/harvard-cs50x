#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Solicitar ao usuário o valor do troco
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calcular moedas de 25
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);

    // Calcular moedas de 10
    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    // Calcular moedas de 5
    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    // Calcular moedas de 1
    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);

    // Somar total de moedas
    int total = quarters + dimes + nickels + pennies;

    printf("%i\n", total);
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }
    return pennies;
}
