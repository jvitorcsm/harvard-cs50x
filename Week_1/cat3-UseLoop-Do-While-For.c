//Imported librarie
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // Usually when I do it this way, it executes one step and only then performs the validation.
    do
    {
        n = get_int("What's n?");
    }
    // While always waiting true or false
    while (n < 0);

    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
