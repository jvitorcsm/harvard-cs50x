#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? \nPress 'Y' for YES or 'N' for NOT: ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed\n");
    }

    // Redundancy, since get_char only works for single characters

    //else if ((c != 'y' || c != 'Y') && (c != 'n' || c != 'N'))
    //{
    //    printf("Please choose between 'Y' for YES or 'N' for NOT");
    //}

    else
    {
        printf("Please choose between 'Y' for YES or 'N' for NOT");
    }
}
