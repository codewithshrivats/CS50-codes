#include <stdio.h>

char orGate(char a1, char a2){

    char a3 = 'A';

    if(a1 == 'N' && a2 == 'N')
    {
        a3 = 'N';
    }
    else if(a1 == 'N' && a2 == 'Y')
    {
        a3 = 'Y';
    }
    else if(a1 == 'Y' && a2 == 'N')
    {
        a3 = 'Y';
    }
    else if(a1 == 'Y' && a2 == 'Y')
    {
        a3 = 'Y';
    }
    else if((a1 != 'Y' && a1 !='N') || (a2 != 'Y' && a2 != 'N'))
    {
        printf("Enter the correct input (Y/N). \n");

    }

    return a3;
}