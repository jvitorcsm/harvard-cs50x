// The program that compare if X or Y is less or greater that the X or Y

// Imported libraries
#include <cs50.h>
#include <stdio.h>

// Main function that does not receive arguments or parameters
int main(void)
{
    // Declaration variables of integer numbers
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    // Conditional 'If' (parameters)
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

