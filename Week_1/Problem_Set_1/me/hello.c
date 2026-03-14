#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get user input
    string name = get_string("What's your name?\n ");
    // Print user input
    printf("Hello, %s\n", name);
}
