/* C Program to Display Prime Numbers Between Intervals Using Function */


#include <stdio.h>

void primes(int num1, int num2);

int main() {

    int num1, num2;
    printf("Type two numbers to define an interval: \n");
    scanf("%d%d", &num1, &num2);
    primes(num1, num2); // Function

    return 0;
}

void primes(int num1, int num2) {
    // Swap 'num1' with 'num2'
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (num1; num1 <= num2; num1++) {
        int flag = 0; // '0' is for prime number
            for (int n = 2; n < num1; n++) {
                if (num1 % n == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                printf("%d ", num1);
            }
    }
    printf("\n");
}
