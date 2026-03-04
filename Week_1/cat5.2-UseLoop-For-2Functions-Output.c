// Imported librarie
#include <cs50.h>
#include <stdio.h>

// Promise declaration function below main function
void meow(int n);

// Main function returning meow() function passing parameters manually number 3 how example
int main(void)
{
    meow(3);
}

// Function meow() waiting arguments 'int n'
void meow(int n)
{
    // I use 'For' to create a loop, with 'int i = x' to declare a start point, and after ';' I set the end point.
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
