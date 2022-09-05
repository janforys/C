/* C Program to calculate power of two numbers entered by a user */

#include <stdio.h>

int main()
{
    double base, power_factor, result = 1;

    printf("BASE: ");
    scanf("%lf", &base);

    printf("POWER: ");
    scanf("%lf", &power_factor);

    for (double k; k < power_factor; k++)
    {
        result *= base;
    }

    printf("\nRESULT: %lf\n", result);

    return 0;
}
