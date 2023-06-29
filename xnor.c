#include <stdio.h>
#include "or.c"
#include "not.c"
#include "and.c"

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

    // Actuall XNOR Gate
    char c3 = andGate(c1,c2); // AB
    char c4 = notGate(c1);
    char c5 = notGate(c2);
    char c6 = andGate(c4,c5); // AbarBbar
    char c7 = orGate(c3,c6);

    printf("The ouput of XNOR Gate is : %c \n", c7);

    return 0;
}