#include <stdio.h>

/**
 * main - switch statement to create a program that will find the month base on the number input.
 * take the input number from 1 to 12 and print the corresponding month, based on the input value
 *
 * if - number is 1 - print January
 * if - number is 2 - print february
 * if number is 3 - print match
 * etc
 *
 */

int main()
{
    int n;
    printf("Write any number from 1 to 12 here: ");
    scanf("%d", n);

    switch (n)
    {

    case 1:
        printf("The month with number %d is: January", n);
        break;

    case 2:
        printf("The month with number %d is: February", n);
        break;

    case 3:
        printf("The month with number %d is: March", n);
        break;

    case 4:
        printf("The month with number %d is: April", n);
        break;

    case 5:
        printf("The month with number %d is: May", n);
        break;

    case 6:
        printf("The month with number %d is: June", n);
        break;

    case 7:
        printf("The month with number %d is: July", n);
        break;

    case 8:
        printf("The month with number %d is: August", n);
        break;

    case 9:
        printf("The month with number %d is: September", n);
        break;

    case 10:
        printf("The month with number %d is: October", n);
        break;

    case 11:
        printf("The month with number %d is: November", n);
        break;

    case 12:
        printf("The month with number %d is: December", n);
        break;

    default:
        printf("The month with number %d does not exist");
    }

    return (0);
}
