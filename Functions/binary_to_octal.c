/* C Program to Convert Binary Number to Octal and vice-versa

Instruction how to make such conversion:
https://www.electrical4u.com/binary-to-octal-and-octal-to-binary-conversion/

Jan Forys 2022 */


#include <stdio.h>
#include <math.h>
#include "mylib.h"

long binary2octal(long binary_value);
int octal2binary(int octal_value);

int main() {
    long binary_value;
    int octal_value;
    
    printf("binary: ");
    scanf("%ld", &binary_value);
    printf("%ld \n\n", binary2octal(binary_value));
    
    printf("octal: ");
    scanf("%d", &octal_value);
    printf("%d \n", octal2binary(octal_value));
    
    return 0;
}

long binary2octal(long binary_value) {
    long sum, sum_result = 0, result = 0;
    long m, multiplier = 1, counter = 0;
    long b, power_factor;

    /* 'multiplier' value count */
    for (b = binary_value; b >= 1; b /= 10) {
        if (counter == 3) {
            multiplier *= 10;
            counter = 0;
        }
        counter++;
    }
    m = multiplier; // to avoid 'multiplier' change
        while (binary_value >= 1) {
        power_factor = 0, sum = 0;
            while (power_factor < 3) {
                sum += binary_value % 10 * pow(2, power_factor);
                binary_value /= 10;
                power_factor++;
            }
            sum_result += sum *= m; // result before reversing
            m /= 10;
        }
    /* Reverse 'sum_result' to get final result */
    do {
        result += sum_result % 10 * multiplier;
        sum_result /= 10;
        multiplier /= 10;
    } while (sum_result >= 1);
    return result;
}

int octal2binary(int octal_value) {
    int octal, binary = 0, binary_value = 0;
    int m, multiplier = 1;
        for (octal = octal_value * 0.1; octal >= 1; octal /= 10) {
            multiplier *= 1000;
        }
        m = multiplier;
        while (octal_value >= 1) {
            binary_value += decimal2binary(octal_value % 10) * multiplier; // from mylib.h
            octal_value /= 10;
            multiplier /= 1000;
        } do {
            binary += binary_value % 1000 * m;
            binary_value /= 1000;
            m /= 1000;
        } while (binary_value >= 1);
    return binary;
}

