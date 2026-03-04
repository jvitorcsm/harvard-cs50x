#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // While is a boolean operator for loop
    while (true)
    {
        n = get_int("What's n?: ");
        if (n < 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
