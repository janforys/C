/* C Program to check whether a number is prime or not */

#include <stdio.h>

int main()
{
    // Keep in mind that amount of prime numbers is endless...
    // Prime number is a positive integer
    // Remember that every number can be divided by 1 and itself, so
    //you have to exclude everything beside 1 and your number with
    //help of loop.
    // Simply check by using loop that it divides by other numbers :)

    int user_num, temp = 0;

    // Enter number
    printf("Enter a positive number: ");
    scanf("%d", &user_num);

    // Check if it divides by other than itself and 1
    for (int x = 2; x < user_num; x++) {

        if (user_num % x == 0) {
            temp = 1;
            break;
        }
    }

    if (temp == 1) {
        printf("IT IS NOT PRIME.\n");
    }
    else {
        printf("IT'S PRIME!\n");
    }

return 0;
}
