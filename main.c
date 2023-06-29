#include <stdio.h>
#include "secondary.c"

int main (void){
    int result = addNumbers(5,10);
    printf("The sum is %i\n", result);
    return 0;
}