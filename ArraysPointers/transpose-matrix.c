/* C Program to Find Transpose of a Matrix */


#include <stdio.h>
#include <unistd.h>

void transpose(); 

int main() {

const int x1, y1;

printf("Enter rows, columns: \n");
scanf("%d %d", &x1, &y1);

transpose(x1, y1);

printf("\nPRESS CTRL+C TO EXIT\n");
pause();

return 0;
}

void transpose(int x1, int y1) {

int matrix[x1][y1];
int result[10][10];

/* Fill initial matrix */
for (int i = 0; i < x1; i++)
	for (int j = 0; j < y1; j++)
		scanf("%d", &result[i][j]);

/* Print out matrices */
/* initial matrix */
for (int i = 0; i < x1; i++) {
	printf("\n");
	for (int j = 0; j < y1; j++) {
		printf("%d ", result[i][j]);
	}
}
printf("\n");

/* result matrix */
for (int i = 0; i < y1; i++) {
	printf("\n");
	for (int j = 0; j < x1; j++) {
		printf("%d ", result[j][i]);
	}
}
printf("\n");

}

