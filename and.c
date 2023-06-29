#include <stdio.h>

char andGate(char a1, char a2){

    if(a1 == 'Y' && a2 == 'Y')
    {
        return 'Y';
    }
    else if(a1 == 'N' && a2 == 'N')
    {
        return 'N';
    }
    else if(a1 == 'Y' && a2 == 'N')
    {
        return 'N';
    }
    else if(a1 == 'N' && a2 == 'Y')
    {
         return 'N';
    }

    return '?';
}
