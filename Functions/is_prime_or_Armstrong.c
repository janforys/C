/* C Program to Check Prime or Armstrong Number Using User-defined Function */


#include <math.h>
#include <stdio.h>

void isArmstrong(int user_number);
void isPrime(int user_number);

int main() {

    int user_number;
    printf("Number: ");
    scanf("%d", &user_number);

    isArmstrong(user_number);
    isPrime(user_number);

    return 0;
}

void isArmstrong(int user_number) {
    int num1 = user_number, num2 = user_number, result, power_factor = 0;
        // Calculate power factor
        do {
            num1 /= 10;
            power_factor++;
        } while (num1 >= 1);

        // Sum of raised to power digits
        while (num2 >= 1) {
            int power = 1;
            int remainder = num2 % 10;
            for (int i = 1; i <= power_factor; i++) {
                    power *= remainder;
                }
            num2 /= 10;
            result += power;
        }
        if (result == user_number) {
            printf("Is Armstrong \n");
        }
}

void isPrime(int user_number) {
    int flag = 0;
        for (int n = 2; n < user_number; n++) {
                if (user_number % n == 0) {
                    flag = 1;
                    break;
                }
        }
    if (flag == 0) {
        printf("Is prime \n");
    }
}

