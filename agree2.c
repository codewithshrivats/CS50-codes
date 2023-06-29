#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char c = get_char("Do you agree? \n");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed. \n");
    }
    else if (c != 'y' || c != 'Y' || c != 'n' || c != 'N')
    {
        printf("Please input 'Y/y' or 'N/n' \n");
    }
}