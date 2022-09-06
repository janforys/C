/* C Program to Reverse a Sentence Using Recursion */


#include <stdio.h>

void reverse();

int main() {
    printf("Sentence: ");
    reverse();
    return 0;
}

void reverse() {
    char sentence;
    scanf("%c", &sentence);
    printf("%c", sentence);
    
    if (sentence != '\n') {
        reverse();
        printf("%c", sentence);
    } else {
        printf("\n");
    }
}


