#include <stdio.h>

int main (void)
{
    char n1;

    printf("Here, Y is 1 and N is 0 \n");
    printf("------------------------- \n");
    printf("Enter the first character(Y/N):  \n");
    n1 = getchar();

    getchar();
    if(n1 != 'Y' && n1 != 'N')
    {
        printf("Please enter the correct input(Y/N). \n");
    }

    if(n1 == 'Y')
    {
        printf("The output is N. \n");
    }
    else if(n1 == 'N')
    {
        printf("The output is Y. \n");
    }
}