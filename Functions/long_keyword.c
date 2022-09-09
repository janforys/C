/* C Program to Demonstrate the Working of Keyword "long" */


#include <stdio.h>

/* Function declaration */
void checkNumber(long number);

int main() {
    int a;
    long b, number;
    long long c;
    double d;
    long double e;

    printf("int = %zu BYTES (32 bits) \n", sizeof(a));
    printf("long int = %zu BYTES (64 bits) \n", sizeof(b));
    printf("long long int = %zu BYTES (64 bits) \n", sizeof(c));
    printf("double = %zu BYTES (64 bits) \n", sizeof(d));
    printf("long double = %zu BYTES (128 bits) \n\n", sizeof(e));
    
    printf("Type some enormous number... ");
    scanf("%ld", &number);
    checkNumber(number); // function call. 'number' is passed to the function
    
    return 0;
}

/* Function definition */
void checkNumber(long number) {

    if (number < 2147483647 && number > -2147483647) {
        printf("It's not a 'long' type value.\n");
    } else {
        printf("It is 'long' type value.\n");
    }
}

