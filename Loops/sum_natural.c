#include <stdio.h>

int main()
{
    int user_num,num,sum;
    printf("Type how many natural numbers you want to summarize: ");
    scanf("%d",&user_num);

    //1+2+3+4+5+6... etc.
    for (num=1; num<=user_num; num++)
    {
        printf("%d\n",num);
        sum+=num;
    }

    printf("Result: %d\n",sum);

    return 0;
}
