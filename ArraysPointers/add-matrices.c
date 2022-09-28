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
printf("____Array 1____\n");
for (int i = 0; i < x1; i++) {
 for (int k = 0; k < y1; k++) {
	printf("Enter element for array1[%d][%d]: ", i, k);
	scanf("%d", &array1[i][k]);
}
}
/* array2 */
printf("\n____Array 2____\n");
for (int m = 0; m < x2; m++) {
 for (int n = 0; n < y2; n++) {
	printf("Enter element for array2[%d][%d]: ", m, n);
	scanf("%d", &array2[m][n]);
}
}

/* Print out */
/* array1 */
printf("\nElements of an Array 1:\n");
for (int i = 0; i < x1; i++) {
 for (int k = 0; k < y1; k++) {
	printf("%d ", array1[i][k]);
}
}
/* array2 */
printf("\nElements of an Array 2:\n");
for (int m = 0; m < x2; m++) {
 for (int n = 0; n < y2; n++) {
	printf("%d ", array2[m][n]);
}
}

printf("\n_________________________\n");

/* Add matrices */
printf("Sum of matrices: ");
for (int a = 0; a < x1; a++) {
 for (int b = 0; b < y1; b++) {
	printf("%d ", array1[a][b] + array2[a][b]);
}
}

printf("\n\n");

return 0;
}
