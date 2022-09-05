#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int z=num%2;

    if (z==0) {
        printf("Even Number\n");
    }
    else {
        printf("Odd NumbeR\n");
    }

    return 0;
}
