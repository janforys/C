/* C Program to Convert Binary Number to Decimal and vice-versa.

Instruction how to make such conversion:
https://www.electrical4u.com/binary-to-decimal-and-decimal-to-binary-conversion/
* 
* Jan Forys 2022 */


#include "stdio.h"
#include "math.h"

int binary2decimal(int binary_value);
int decimal2binary(int decimal_value);

int main() {
    int binary_value, decimal_value;
    scanf("%d", &binary_value);
    printf("%d \n\n", binary2decimal(binary_value));
    scanf("%d", &decimal_value);
    printf("%d \n", decimal2binary(decimal_value));
    return 0;
}

int binary2decimal(int binary_value) {
    int digit, power_factor = 0, sum_binary = 0;
    while (binary_value >= 1) {
        digit = binary_value % 10;
            // Check if 'digit' is different than 0 and 1
            if ((digit != 0) && (digit != 1)) {
                printf("ERROR! \n");
                return 0;
                break;
            }
        sum_binary += digit * pow(2, power_factor); // count power of base = 2 (binary)
        binary_value /= 10;
        power_factor++; // 'power_factor' is a "weight" of binary value
    }
    return sum_binary;
}

int decimal2binary(int decimal_value) {
    int m, multiplier = 1, sum = 0, sum_result = 0;
    // Count 'multiplier' value, needed for remainder multiplying
    for (int d = decimal_value; d > 1; d /= 2) {
        multiplier *= 10;
    }
    m = multiplier; // to avoid 'multiplier' change
        while (decimal_value >= 1) {
            sum += decimal_value % 2 * m;
            decimal_value /= 2;
            m /= 10;
        } do { // converting to result value
            sum_result += sum % 10 * multiplier;
            sum /= 10;
            multiplier /= 10;
        } while (sum >= 1);
    return sum_result;
}
