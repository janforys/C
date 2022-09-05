/* C Program to check whether a number entered by user is palindrome or not */


#include <stdio.h>

int main()
{
    int number_to_check, reverse, temp_1 = 0;

    printf("Enter number to check: ");
    scanf("%d", &number_to_check);
    printf("\nYou've entered %d...\n", number_to_check);

    int temp_2 = number_to_check;

    // reverse number to check
    do {
        reverse = number_to_check % 10;
        temp_1 = temp_1 * 10 + reverse;
        number_to_check /= 10;

    } while (number_to_check >= 1);

    // check if "number_to_check" is not equal to reverse (temp_1)
    if (temp_2 != temp_1) {
        printf("\n ...and it is not a palindrome.\n\n");
    }
    else {
        printf("\n ...and it is palindrome number.\n\n");
    }
return 0;
}
