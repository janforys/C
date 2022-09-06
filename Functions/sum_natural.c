/* C Program to Find the Sum of Natural Numbers using Recursion */


#include "stdio.h"

int recursion(int number);

int main() {
    int number;
    printf("Give me some Number: ");
    scanf("%d", &number);
    printf("Your Number is %d.\n", number);
    printf("Sum of natural numbers is %d.\n", recursion(number));
    return 0;
}

int recursion(int number) {
    if (number > 0) {
        return number + recursion(number - 1);
    } else {
        return 0;
    }
}
