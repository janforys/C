#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Type A: ");
    scanf("%d",&a);
    printf("Type B: ");
    scanf("%d",&b);

    // swap "A" with "B" if a<b
    if (a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    // loop to check if "c" is zero or not
    do {
        c=a%b;
        printf("\nGCD = %d\n",b);
        a=b;
        b=c;
    }
    while (c!=0);

    return 0;
}
