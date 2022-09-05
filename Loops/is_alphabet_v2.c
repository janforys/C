#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);

    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            printf("is an alphabet\n");
        }
    else
        {
            printf("is not an alphabet\n");
        }
    //another method-by using an "isalpha()" function
    if (isalpha(ch))
        {
            printf("(isalpha)is an alphabet\n");
        }
    else
        {
            printf("(isalpha)is not an alphabet\n");
        }

    return 0;
}
