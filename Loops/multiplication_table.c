/* Multiplication Table */

#include <stdio.h>

int main()
{
    int k;

    do  {
        printf("Define size of the table (greater than 0): ");
        scanf("%d",&k);
    }
    while (k<=0);

    //generates multiplication table
    for (int j=1; j<=k; j++)
    {
        printf("%d x %d = %d\n",j,k,k*j);
    }

    return 0;
}
