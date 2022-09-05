/* C program to reverse number
entered by a user */

#include <stdio.h>

int main()
{
    //variables declaration
    int user_number, remainder;

    printf("Type non-negative and whole number: ");
    scanf("%d",&user_number);

    remainder = user_number;

    //do-while loop to get remainder as first number
    //to reverse
    do {
        remainder = user_number % 10;
        user_number /= 10;
        printf("%d", remainder);
    } while (user_number >= 1);

    printf("\n"); //separating line

    return 0;
}
