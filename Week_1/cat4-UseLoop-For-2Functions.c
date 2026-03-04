#include <cs50.h>
#include <stdio.h>

//Prototype =  Promise - I said for my C, hey Guy, I will create a function 'meow' that dont receive input and return output
void meow(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("Meow\n");
}
