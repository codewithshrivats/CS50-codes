#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int x;
    int y;

    x = get_int("Please state the 1st number(X): \n");
    y = get_int("Please state the 2nd number(Y): \n");

    if (x > y)
    {
        printf("X is greater than Y as %d is greater than %d \n", x, y);

    }
    else if(x < y)
    {
        printf("X is less than Y as %d is less than %d \n", x, y);
    }
    else if (x == y)
    {
        printf("X is equal to Y as %d is equal to %d \n", x, y);
    }
}