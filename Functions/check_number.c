/* C Program to Check Whether a Number can be Expressed as Sum
of Two Prime Numbers */


#include <stdio.h>

int checkNumber(int user_number);

int main() {

    int user_number, flag;
    printf("Enter positive number: ");
    scanf("%d", &user_number);
    printf("Number You entered: %d \n\n", user_number);

    flag = checkNumber(user_number); // F-ction

    if (flag == 1) {
        printf("\nCan be expressed\n");
    } else {
        printf("\nCannot be expressed\n");
    }
    printf("\nFLAG STATE: %d\n", flag);
    return 0;
}

int checkNumber(int user_number) {
    int prime_1, prime_2, flag = 0;

    for (prime_1 = 2; prime_1 < user_number; prime_1++) {
        int marker_1 = 0;
            // Check if 'prime_1' is in fact a prime number
            for (int i = 2; i < prime_1; i++) {
                if (prime_1 % i == 0) {
                    marker_1 = 1;
                    break;
                }
            }

        if (marker_1 == 0) {
           for (prime_2 = 2; prime_2 < user_number; prime_2++) {
               int marker_2 = 0;
                       // Check if 'prime_2' is in fact a prime number
                       for (int j = 2; j < prime_2; j++) {
                           if (prime_2 % j == 0) {
                                marker_2 = 1;
                                break;
                           }
                       }
                   if (marker_2 == 0) {
                        // Summarize prime numbers
                        if (prime_1 + prime_2 == user_number) {
                            printf("%d + %d \n" , prime_1, prime_2);
                            flag = 1;
                            break;
                        }
                   }
           }
        }
    }
    return flag;
}
