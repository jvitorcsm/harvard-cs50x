//1. Receive input = What's the height of the pyramid?
//2. I need print lines --- for default, print for left -> right
//3. I need to jump lines and print one more 1 block


// Import library
#include <cs50.h>
#include <stdio.h>

// Promise function
int height;
void row(void);

// Declaration Main function
int main(void)
{
    do
    {
    // Input - Height pyramid
    height = get_int("What's the height of the pyramid?: ");
    }
    while (height < 1);
    {
    row();
    }
}

// Function for print row
void row(void)
{
    // For caunt rows
    for (int i = 1; i <= height; i++)
    {
        // For caunt spaces = height -1
       for (int spaces = height; spaces > i; spaces--)
        {
            printf(" ");
        }
        // Caunt blocks compared with i
        for (int blocks = 0; blocks < i; blocks++)
        {
            printf("#");
        }
        printf("\n");
    }
}
