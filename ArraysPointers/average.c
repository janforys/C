/* C Program to calculate average using Arrays */


#include <stdio.h>

int main() {

 int howMany;
 printf("Type how many elements to calculate: ");
 scanf("%d", &howMany);
 howMany -= 1;
 int array[howMany];

 printf("Type elements to calculate: \n");
 for (int x = 0; x < howMany; x++) {
  scanf("%d ", &array[howMany]);
 }
 for (int y = 0; y <= howMany; y++) {
  printf("%d \n", array[howMany]);
 }
 printf("\n");

 return 0;
}



