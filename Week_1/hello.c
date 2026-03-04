// The program that says hello to the world

// Import library
#include <cs50.h>
#include <stdio.h>

// 'int' indicate number 0 in the end program
// 'main' is a main name function
// '(void)' indicate that the function does not receive nothing arguments or parameters
int main (void)
{
    string answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer);
}
