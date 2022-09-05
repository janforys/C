#include <stdio.h>

int main()
{
    //"a" and "b" are two first elements
    int a=0,b=1,c=a+b,j,number_of_elements;

    do  {
        printf("Type how many elements of series you want to see: ");
        scanf("%d",&number_of_elements);
    }
    while (number_of_elements<=0);

    printf("%d + %d = %d\n",a,b,c);

    for (j=2; j<=number_of_elements; j++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d + %d = %d\n",a,b,c);
    }
    return 0;
}
