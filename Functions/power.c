/* C Program to calculate the power using recursion */


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
    if (factor != 0) {
        return base * power(base, factor - 1);
    } else {
        return 1;
    }
}
