#include <stdio.h>

char notGate(char a1){

    if(a1 == 'Y')
    {
        a1 = 'N';
    }
    else if(a1 == 'N')
    {
        a1 = 'Y';
    }
    
    return a1;
}