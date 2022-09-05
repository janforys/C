#include <stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if ((a>b)&&(a>c))
        {
            printf("\nThe largest is %lf\n", a);
        }
    else if ((c>a)&&(c>b))
        {
            printf("\nThe largest is %lf\n", c);
        }
    else
        {
            printf("\nThe largest is %lf\n", b);
        }
    return 0;
}
