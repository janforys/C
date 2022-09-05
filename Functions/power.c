/* C Program to calculate the power using recursion */

/* NOTE: That program works well with online compilers
but do not on PC */


#include "stdio.h"

int power(int base, int factor);

int main() {
    int base, factor;
    printf("base: ");
    scanf("%d", &base);
    printf("factor: ");
    scanf("%d", &factor);
    printf("result: %d\n", power(base, factor));
    return 0;
}

int power(int base, int factor) {
    if (factor > 1) {
        return base * power(base, factor - 1);
    }
}
