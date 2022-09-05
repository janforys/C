/* Least Common Multiple */
/* !!!do not work for all numbers!!! */

#include <stdio.h>

int main()
{
    // variables declaration
    int n1,n2,n,m,x=0;

    // entering numbers
    printf("To find LCM please give me 2 numbers: \n");
    printf("1st: ");
    scanf("%d",&n1);
    printf("2nd: ");
    scanf("%d",&n2);

    // if "n1" is greater than "n2", then swap them
    if (n1>n2) {
        int temp=n1;
        n1=n2;
        n2=temp;
    }

    if (n1==n2) {
        printf("\nLCM = %d\n",n1);
    }
    // works only for 1 iteration back, no more
    else {
        for (int k=1; k<=n1; k++)
        {
            //int x=0;

            n=k*n1;
            //printf("\n%d\n",n);

            if (n==m) {
                printf("\nLCM = %d\n",n);
                break;
            }

            m=(k-x)*n2;
            printf("\n%d\n",n);
            printf("\n%d\n",m);

            x=x+1;
            /*for (int i=1; i<=n2; i++)
            {
                m=k*n2;
                //printf("%d\n", m);
            }*/
        }
    }
    return 0;
}
