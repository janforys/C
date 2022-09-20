/* C Program to calculate average using Arrays */


#include <stdio.h>

int main() {

 int howMany;
 float average;
 printf("Type how many elements to calculate: ");
 scanf("%d", &howMany);
 float array[howMany - 1];

 /* Save into */
 printf("Type elements to calculate: ");
 for (int x = 0; x <= howMany - 1; ++x) {
  scanf("%f", &array[x]);
 }

 /* Print from */
 for (int x = 0; x <= howMany - 1; ++x) {
  float sum;
  average = (sum += array[x]) / howMany;
 }

 printf("Average = %f\n\n", average);

 return 0;
}



