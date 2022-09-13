/* C Program to Convert Octal Number to Decimal and vice-versa

Instruction how to make such conversion:
https://www.electrical4u.com/octal-to-decimal-and-decimal-to-octal-conversion/

Jan Foryś 2022 */


#include <stdio.h>
#include <math.h>

/* Function declarations */
int octal2decimal(int octalValue);
int decimal2octal(int decimalValue);
/* ----- END ----- */

int main() {
    int octalValue;
    int decimalValue;
    
    printf("octal: ");
    scanf("%d", &octalValue);
    printf("%d\n", octal2decimal(octalValue));
    
    printf("decimal: ");
    scanf("%d", &decimalValue);
    printf("%d\n", decimal2octal(decimalValue));
    
    return 0;
}

int octal2decimal(int octalValue) {
    int powerFactor = 0, decimal = 0;
    while (octalValue >= 1) {
        decimal += octalValue % 10 * pow(8, powerFactor);
        octalValue /= 10;
        powerFactor++;
    }
    return decimal;
}

int decimal2octal(int decimalValue) {
    int multiplier = 1, sum = 0, octal = 0;
    int value = decimalValue;
    for (int k = decimalValue; k >= 1; k /= 10) {
        multiplier *= 10;
    }
    int m = multiplier;
    decimalValue *= 10;
    while (decimalValue >= 1) {
        int temp = value % 8;
        //sum += value % 8 * multiplier;
            if (value == 1) {
                 temp = value;   
            }
        printf("\n%d", temp);
        sum += temp * multiplier;
        printf("\n");
        printf("%d", sum);
        value /= 8; // 8 because it is octal
        printf("\n%d", value);
        decimalValue /= 10;
        multiplier /= 10; // needed to concatenate
    }
    printf("\n");
    //sum /= 10;
    
    /* Reversing octal result */
    /*while (sum >= 1) {
        octal += sum % 10 * m; 
        sum /= 10;
        m /= 10;
    }
    octal /= 10;*/
    return 666;
}
