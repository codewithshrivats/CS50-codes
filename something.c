#include <stdio.h>
#include <math.h>

int main (void)
{
    int first;
    int second;
    int third;
    int add;

    printf("Enter the first number : \n");
    scanf("%i", &first);
    printf("Enter the second number : \n");
    scanf("%i", &second);
    printf("Enter the third number : \n");
    scanf("%i", &third);

    add = first + second + third;
    printf("The sum is : %i \n", add);
}