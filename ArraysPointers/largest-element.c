/* C Program to find the largest element in an array */


#include <stdio.h>

int main() {

int index = 5;
int largestElement;
int elements[index];

for (int i = 0; i < index; i++) {
printf("Element: ");
scanf("%d", &elements[i]);
}

largestElement = elements[0];
for (int i = 1; i < index; i++) {
if (largestElement < elements[i]) {
largestElement = elements[i];
}
}

printf("Largest element: %d\n\n", largestElement);
return 0;

}
