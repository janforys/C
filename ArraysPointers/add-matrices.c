/* C Program to add two Matrices using multi-dimensional Arrays */


#include <stdio.h>
#include <unistd.h>

void loader();

int main() {

/* Declare dimensions of 2D arrays */
const int x1, y1, x2, y2;

printf("Define dimensions of first 2D array:\nRows: ");
scanf("%d", &x1);
printf("Columns: ");
scanf("%d", &y1);
printf("Define dimensions of second 2D array:\nRows: ");
scanf("%d", &x2);
printf("Columns: ");
scanf("%d", &y2);

int array1[x1][y1];
int array2[x2][y2];

/* Fill arrays with numbers */
/* array1 */
printf("\n_____Array 1_____\n");
for (int i = 0; i < x1; i++) {
 for (int k = 0; k < y1; k++) {
	printf("Enter element for array1[%d][%d]: ", i, k);
	scanf("%d", &array1[i][k]);
}
}
/* array2 */
printf("\n_____Array 2_____\n");
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

printf("\n__________________________\n");

/* Loading animation */
loader();
printf("\n");

/* Add matrices */
printf("Sum of matrices:\n");
/* array1 */
for (int i = 0; i < x1; i++) {
	printf("| ");
 for (int k = 0; k < y1; k++) {
	printf("%d ", array1[i][k]);
}
printf("|\n");
}
/* array2 */
printf("   + \n");
for (int m = 0; m < x2; m++) {
	printf("| ");
 for (int n = 0; n < y2; n++) {
	printf("%d ", array2[m][n]);
}
printf("|\n");
}
/* result */
printf("   = \n");
for (int a = 0; a < x1; a++) {
	printf("| ");
 for (int b = 0; b < y1; b++) {	 
	printf("%d ", array1[a][b] + array2[a][b]);
}
printf("|\n");
}

printf("\n\nPRESS CTRL+C TO EXIT\n");
pause();
return 0;
}

void loader() {
    const int delayTime = 500; // ms
    const int numDots = 6;
    const char text[] = "Wait";
    const int wait = 2;
    int w = 1;

    while (w <= wait) {
        // Return and clear with spaces, then return and print prompt.
        printf("\r%*s\r%s", sizeof(text) - 1 + numDots, "", text);
        fflush(stdout);

        // Print numDots number of dots, one every trigger milliseconds.
        for (int i = 0; i < numDots; i++) {
            usleep(delayTime * 1000);
            fputc('.', stdout);
            fflush(stdout);
        }
	w++;
    }
}
