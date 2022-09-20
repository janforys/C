/* C Program to calculate average using Arrays */


#include <stdio.h>

int main() {

 int howMany, average;
 printf("Type how many elements to calculate: ");
 scanf("%d", &howMany);
 int array[howMany - 1];

 /* Save into */
 printf("Type elements to calculate: ");
 for (int x = 0; x <= howMany - 1; ++x) {
  scanf("%d", &array[x]);
 }

 /* Print from */
 for (int x = 0; x <= howMany - 1; ++x) {
  int sum;
  average = (sum += array[x]) / howMany;
 }

 printf("Average = %d\n\n", average);

 return 0;
}



