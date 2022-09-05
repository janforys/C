/* C Program to Find Factorial of a Number Using Recursion */


#include "stdio.h"

int factorial(int number);

int main() {
    int number;
    printf("Give me some Number: ");
    scanf("%d", &number);
    printf("Your Number is %d.\n", number);
    printf("Factorial of a Number %d is: %d\n", number, factorial(number));
    return 0;
}

int factorial(int number) {
    if (number > 1) {
        return number * factorial(number - 1);
    } else if ((number == 0) || (number < 0)) {
        return 0;
    }
}
