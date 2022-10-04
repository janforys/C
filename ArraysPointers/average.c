/* C Program to calculate average using Arrays */


#include <stdio.h>
#include <unistd.h>

int main() {

 int index;
 float average;
 printf("Type how many elements to calculate: ");
 scanf("%d", &index);
 float array[index];

 /* Save into an array */
 printf("Type elements to calculate: ");
 for (int i = 0; i < index; ++i) {
  scanf("%f", &array[i]);
 }

 /* Print from an array */
 for (int i = 0; i < index; ++i) {
  float sum;
  average = (sum += array[i]) / index;
 }

 printf("Average = %f", average);

 printf("\n\nPRESS CTRL+C TO EXIT\n");
 pause();
 return 0;
}



