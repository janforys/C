/* C Program to add two Matrices using multi-dimensional Arrays */


#include <stdio.h>

int main() {

/* Declare dimensions of 2D arrays */
const int x1, y1, x2, y2;

printf("Define dimensions of first array:\n");
scanf("%d%d", &x1, &y1);
printf("Define dimensions of second array:\n");
scanf("%d%d", &x2, &y2);

int array1[x1][y1];
int array2[x2][y2];

/* Fill arrays with numbers */
/* array1 */
for (int i = 0; i < x1; i++) {
for (int k = 0; k < y1; k++) {
printf("Enter element for array1[%d][%d]: ", i, k);
scanf("%d", &array1[i][k]);
}
}
/* array2 */


return 0;
}
