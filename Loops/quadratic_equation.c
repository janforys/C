#include <stdio.h>
#include <math.h>

int main()
{
    printf("Give me A, B and C of quadratic equation:\n");
    float a,b,c,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    //display quadratic equation
    printf("\n%fx^2+%fx+%f\n",a,b,c);
    //count Delta
    float DELTA=b*b-4*a*c;
    printf("DELTA = %f\n",DELTA);

    if (DELTA>0) //then x1 and x2 solution
        {
            x1=(-b+(sqrt(DELTA)))/(2*a);
            x2=(-b-(sqrt(DELTA)))/(2*a);
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
        }
    else if (DELTA==0) //then one x0 solution
        {
            x1=x2=(-b+(sqrt(DELTA)))/(2*a);
            printf("x0=x1=x2 = %f\n",x1);
        }
    else
        {
            printf("There is no solution :-(\n");
        }

    return 0;
}
