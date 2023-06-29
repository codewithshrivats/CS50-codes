#include <stdio.h>
#include "or.c"
#include "not.c"

int main (void)
{
    char c1; // A
    char c2; // B

    printf("Here, Y is 1 and N is 0 \n");
    printf("------------------------- \n");
    printf("Enter the first character (Y/N):  \n");
    c1 = getchar();

    getchar();
    if(c1 != 'Y' && c1 != 'N')
    {
        printf("Please enter the correct input as (Y/N). \n");
        return 1;
    }

    printf("Enter the second character (Y/N):  \n");
    c2 = getchar();

    getchar();
    if(c2 != 'Y' && c2 != 'N')
    {
        printf("Please enter the correct input as (Y/N). \n");
        return 1;
    }

    // Actual NOR Gate
    char c3 = orGate(c1,c2);
    char c4 = notGate(c3);

    printf("The output of NOR Gate is : %c \n", c4);

    return 0;
}