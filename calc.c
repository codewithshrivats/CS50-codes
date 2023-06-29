#include <stdio.h>
#include <math.h>

int main (void)
{
    int choice;
    int num1, num2, num3;
    int add, sub, mul, div, mod, sqr, cub, sqrt1, cbrt1;

    printf("Calculation Menu:\n");
    printf("---------------------\n");
    printf("1. Addition(+)\n");
    printf("2. Subtraction(-)\n");
    printf("3. Multiplication(*)\n");
    printf("4. Division(/)\n");
    printf("5. Modulus(%%)\n");
    printf("6. Square(a^2)\n");
    printf("7. Cube(a^3)\n");
    printf("8. Square Root\n");
    printf("9. Cube Root\n");
    printf("10. Quit\n");
    printf("---------------------\n");

    printf("Enter your choice of calculation: \n");
    scanf("%d", &choice);

    if(choice < 1 || choice > 10)
    {
        printf("Error: Please enter the valid input (1 to 10).\n");
        return 1;
    }
    else{
        printf("The correct input was entered.\n");
    }

    if(choice == 10)
    {
        printf("Program exited successfully.\n");
        return 0;
    }

    if(choice >= 6 && choice <= 9)
    {
        printf("Enter the number: \n");
        scanf("%d", &num3);

        switch(choice){
            case 6 :
                sqr = num3 * num3;
                printf("The square of %d is %d. \n", num3, sqr);
                break;

            case 7 :
                cub = num3 * num3 * num3;
                printf("The cube of %d is %d. \n", num3, cub);
                break;

            case 8 :
                sqrt1 = sqrt(num3);
                printf("The square root of %d is %d. \n", num3, sqrt1);
                break;

            case 9 :
                cbrt1 = cbrt(num3);
                printf("The cube root of %d is %d. \n", num3, cbrt1);
                break;
        }

        return 0;
    }

    printf("Enter two numbers : \n");
    scanf("%d %d", &num1, &num2);

    printf("The numbers entered are: %d %d \n", num1, num2);

    switch(choice){
        case 1 :
            add = num1 + num2;
            printf("The addition of %d, %d is : %d \n", num1, num2, add);
            break;

        case 2 :
            sub = num1 - num2;
            printf("The subtraction of %d, %d is : %d \n", num1, num2, sub);
            break;

        case 3 :
            mul = num1 * num2;
            printf("The multiplication of %d, %d is : %d \n", num1, num2, mul);
            break;

        case 4 :
            div = num1 / num2;
            printf("The division of %d, %d is : %d \n", num1, num2, div);
            break;

        case 5 :
            mod = num1 % num2;
            printf("The modulus (remainder) of %d, %d is : %d \n", num1, num2, mod);
            break;
    }

    return 0;
}