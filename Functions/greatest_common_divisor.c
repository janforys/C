/* C Program to Find G.C.D Using Recursion */


#include "stdio.h"

int GCD(int user_number1, int user_number2);

int main() {
    int user_number1, user_number2;
    printf("Type two numbers: \n");
    scanf("%d \n %d", &user_number1, &user_number2);
    printf("Greatest Common Divisor: %d \n", GCD(user_number1, user_number2));
    return 0;
}

int GCD(int user_number1, int user_number2) {
    // Swap numbers if first is lower than second
    if (user_number1 < user_number2) {
        int temp = user_number1;
        user_number1 = user_number2;
        user_number2 = temp;
    }
    if (user_number2 != 0) {
        if (user_number1 % user_number2 == 0) {
            return user_number2; // returned value
        }
        GCD(user_number2, user_number1 % user_number2); // recursion
    }
}

