#include <stdio.h>

int main()
{
    char char1; //variable declaration
    printf("Enter some letter: ");
    scanf("%c", &char1); //wait to enter a letter
    //check condition
    if (char1=='a'||char1=='e'||char1=='i'||char1=='o'||char1=='u')
        {
            printf("The char you've entered is a vowel\n");
        }
    else
        {
            printf("The char you've entered is a consonant\n");
        }

    return 0;
}
