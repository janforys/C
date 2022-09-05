/* C Program to count digits of a
number, which user enters */

#include <stdio.h>

int main()
{
    float user_number;
    int number_of_digits=0;

    printf("Enter a number: ");
    scanf("%f", &user_number);

    do {
        user_number /= 10;
        number_of_digits++;
    } while (user_number>=1);

    printf("\n%d is a number of digits in your value.\n", number_of_digits);

    return 0;
}
