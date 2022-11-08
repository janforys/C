/* C Program to Find Transpose of a Matrix */


#include <stdio.h>
#include <unistd.h>

void transpose(int, int); 

int main() {

const int x, y;

printf("Enter rows, columns: \n");
scanf("%d %d", &x, &y);

transpose(x, y);

printf("\nPRESS CTRL+C TO EXIT\n");
pause();

return 0;
}

void transpose(int x, int y) {

int matrix[100][100];

/* Fill matrix */
for (int i = 0; i < x; i++)
	for (int j = 0; j < y; j++)
		scanf("%d", &matrix[i][j]);

/* Print out matrices */
/* matrix */
for (int i = 0; i < x; i++) {
	printf("\n");
	for (int j = 0; j < y; j++) {
		printf("%d ", matrix[i][j]);
	}
}
printf("\n");

/* result */
for (int i = 0; i < y; i++) {
	printf("\n");
	for (int j = 0; j < x; j++) {
		printf("%d ", matrix[j][i]);
	}
}
printf("\n");

}

