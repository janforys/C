/* C Program to display all factors of a number entered by a user. */

#include <stdio.h>

int main()
{
    int user_num, factor, factor_count = 0;

    printf("Enter positive number: ");
    scanf("%d", &user_num);
    printf("Factors:\n");

    for (int n = 1; n <= user_num; n++) {
        if (user_num % n == 0) {
            factor_count++;
            printf("%d\n", n);
        }
    }
    printf("\nFactor amount: %d\n", factor_count);

    return 0;
}
