#include <stdio.h>
#include "and.c"
#include "not.c"
#include "or.c"

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

    //Actual X-OR Gate.
    //ABbar
    char c3 = notGate(c2);
    char c4 = andGate(c1,c3);

    //AbarB
    char c5 = notGate(c1);
    char c6 = andGate(c5,c2);

    //ABbar + AbarB
    char c7 = orGate(c4,c6);

    printf("The output of X-OR Gate is %c. \n", c7);

    return 0;
}