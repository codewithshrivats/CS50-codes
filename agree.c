#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char c = get_char("Do you agree? \n");

    if (c == 'y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n')
    {
        printf("Disagreed. \n");
    }
}