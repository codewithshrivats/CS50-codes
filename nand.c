#include <stdio.h>
#include "and.c"
#include "not.c"

int main (void)
{
    char c1; // A
    char c2; // B
    char c3, c4;

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

    // Actual NAND Gate
    c3 = andGate(c1, c2);
    c4 = notGate(c3);

    printf("The ouptut of NAND Gate is : %c \n", c4);

    return 0;
}
