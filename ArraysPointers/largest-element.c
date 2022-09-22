/* C Program to find the largest element in an array */

/* TRY: is it an infinite loop?
 with an inner array and
 displaying results continously? */


#include <stdio.h>

int main() {

int largestElement, index = 5;
int elements[index];
int elementsCompare[index];

printf("Element: ");
for (int i = 0; i < index; i++) {
scanf("%d", &elements[i]);
}

/* Copying arrays */
for (int loop = 0; loop < index; loop++) {
elementsCompare[loop] = elements[loop];
}

for (int i = 0; i < index; i++) {
for (int c = 0; c < index; c++) {
if (elements[i] < elementsCompare[c]) {
largestElement = elementsCompare[c];
}
}
}

printf("Largest element: %d\n\n", largestElement);
return 0;

}
