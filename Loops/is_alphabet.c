#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);

    if ((ch=='a')||(ch=='b')||(ch=='c')||(ch=='d')||(ch=='e')||(ch=='f')||
        (ch=='g')||(ch=='h')||(ch=='i')||(ch=='j')||(ch=='k')||(ch=='l')||
        (ch=='m')||(ch=='n')||(ch=='o')||(ch=='p')||(ch=='r')||(ch=='s')||
        (ch=='t')||(ch=='u')||(ch=='w')||(ch=='q')||(ch=='x')||(ch=='y')||
        (ch=='z'))
        {
            printf("is an alphabet\n");
        }
    else
        {
            printf("is not an alphabet\n");
        }

    return 0;
}
