#include <stdio.h>
#include <string.h>

// Comment the appropriate section depending if you use the else if or switch case parts.

int main (void)
{
    char c1;
    char c2;

    printf("Here, Y is 1 and N is 0 \n");
    printf("------------------------- \n");
    printf("Enter the first character (Y/N):  \n");
    c1 = getchar();

    getchar();
    if(c1 != 'Y' && c1 != 'N')
    {
        printf("Please enter the correct input as (Y/N). \n");
    }

    printf("Enter the second character (Y/N):  \n");
    c2 = getchar();

    getchar();
    if(c2 != 'Y' && c2 != 'N')
    {
        printf("Please enter the correct input as (Y/N). \n");
    }
     //This part is made up of only if else statements.
    if(c1 == 'Y' && c2 == 'Y')
    {
        printf("The output is Y. \n");
    }
    else if(c1 == 'N' && c2 == 'N')
    {
        printf("The output is N. \n");
    }
    else if(c1 == 'Y' && c2 == 'N')
    {
        printf("The output is N. \n");
    }
    else if(c1 == 'N' && c2 == 'Y')
    {
         printf("The output is N. \n");
    }

    // This part is made up of switch case statements
    switch (c1){
        case 'Y' :
            switch (c2){
                case 'Y' :
                    printf("The output is Y. \n");
                    break;

                case 'N' :
                    printf("The output is N. \n");
                    break;

                default :
                    printf("Please enter the correct input as (Y/N). \n");
                    break;
            }
            break;

        case 'N' :
            switch (c2){
                case 'Y' :
                    printf("The output is N. \n");
                    break;

                case 'N' :
                    printf("The output is N. \n");
                    break;

                default :
                    printf("Please enter the correct input as (Y/N). \n");
                    break;
            }
            break;

        default :
            printf("Please enter the correct input as (Y/N). \n");
            break;
    }

    return 0;
}