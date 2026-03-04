// Return value

//Imported libraries
#include <cs50.h>
#include <stdio.h>

// When i wrote my function below that 'main' funciton, I need declaration this function um above code main: example

// Function for loop Number positive
int get_positive_int(void);

// Function that says how consequence 'meow' based on the numbers of times I declare it in the function "int get_positive_int(void);"
void meow(int n);

// Main function that return function meow() passing parameters n
int main(void)
{
    int n = get_positive_int();
    meow(n);
}

// Get number of meows
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    return n;
}

// Meow some number of times
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
