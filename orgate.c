#include <stdio.h>

int main (void)
{
    char v1;
    char v2;

    printf("Here, Y is 1 and N is 0 \n");
    printf("------------------------- \n");
    printf("Enter the first character(Y/N):  \n");
    v1 = getchar();

    getchar();
    if(v1 != 'Y' && v1 != 'N')
    {
        printf("Enter the correct input(Y/N). \n");
    }

    printf("Enter the second character(Y/N):  \n");
    v2 = getchar();

    getchar();
    if(v2 != 'Y' && v2 != 'N')
    {
        printf("Enter the correct input(Y/N). \n");
    }

    switch(v1){
        case 'Y' :
            switch (v2){
                case 'Y' :
                    printf("The output is Y. \n");
                    break;

                case 'N' :
                    printf("The output is Y. \n");
                    break;
            }
            break;

        case 'N' :
            switch (v2){
                case 'Y' :
                    printf("The output is Y. \n");
                    break;

                case 'N' :
                    printf("The output is N. \n");
                    break;
            }
            break;
    }
    return 0;
}