/* Swapping numbers
(another version) */

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("\n%d\n%d\n",x,y);
    return 0;
}
