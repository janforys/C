/* C Program to Check Armstrong Number.

   User enters a number.
   The program need to check if it is armstrong number or not.

   Divide number to digits (use modulo operator).
   Check if all digits have been used (does amount matter?).
   Raise each digit to the power of n, where: n is amount of digits.
   Sum powered digits.
   Compare result with number entered by a user.

   e.g.: abcd... = a^n + b^n + c^n + d^n +  */


#include <stdio.h>

int main()
{
    // Declare variables
    int num_to_check, digit, power_factor, digit_sum;

    printf("Enter positive number: ");
    scanf("%d", &num_to_check);
    int check = num_to_check;

    // Counting power factor (n)
    for (int a = num_to_check; a >= 1; a /= 10) {
        power_factor++;
    }

    // Digitize number
    while (num_to_check >= 1) {
        digit = num_to_check % 10;
        num_to_check /= 10;

            // Raise each digit to power
            int power_result = 1;
            for (int i=1; i <= power_factor; i++) {
                power_result *= digit;
            }

            // Summarize powered digits
            digit_sum += power_result;
    }

    // Comparing results
    if (digit_sum == check) {
        printf("[ A R M S T R O N G ]\n");
    } else {
        printf("This is not that number. Keep looking for your luck.\n");
    }

    return 0;
}
