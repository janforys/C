/* Swapping numbers */

#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d%d", &x, &y);
    z=x;
    x=y;
    y=z;
    printf("\n%d\n%d\n",x,y);
    return 0;
}
