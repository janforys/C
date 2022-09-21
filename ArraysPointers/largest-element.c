/* C Program to find the largest element in an array */

/* TRY: is it an infinite loop?
 with an inner array and
 displaying results continously? */


#include <stdio.h>

int main() {

int index = 0;
int elements[index];
int largestElement;

while(1) {
printf("Element: ");
scanf("%d", &elements[index]);
printf("Largest element: %d\n", elements[index]);
largestElement = elements[index];
for (int i = 0; i <= index; i++) {
if (elements[i] > largestElement) {
	elements[index] = elements[i];
}
}
printf("index = %d\n", index);
index++;
}

printf("\n\n");
return 0;

}
