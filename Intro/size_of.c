#include <stdio.h>

int main()
{
    int i;
    char ch;
    double d;
    float f;

    printf("i: %zu bytes\n", sizeof(i));
    printf("ch: %zu bytes\n", sizeof(ch));
    printf("d: %zu bytes\n", sizeof(d));
    printf("f: %zu bytes\n", sizeof(f));

    return 0;
}
