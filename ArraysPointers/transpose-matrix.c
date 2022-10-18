/* C Program to Find Transpose of a Matrix */


#include <stdio.h>
#include <unistd.h>

void transpose(); 

int main() {

const int x1, y1, x2, y2;

printf("Enter rows, columns: \n");
scanf("%d %d", &x1, &y1);

printf("Enter rows, columns: \n");
scanf("%d %d", &x2, &y2);

transpose(x1, y1, x2, y2);

printf("\nPRESS CTRL+C TO EXIT\n");
pause();

return 0;
}

void transpose(int x1, int y1, int x2, int y2) {

int m1[x1][y1];
int m2[x2][y2];

/* Fill matrices */
/* First matrix */
for (int i = 0; i < x1; i++)
	for (int j = 0; j < y1; j++)
		scanf("%d", &m1[i][j]);
	
/* Second matrix */
for (int i = 0; i < x2; i++)
	for (int j = 0; j < y2; j++)
		scanf("%d", &m2[i][j]);

/* Print out matrices */
/* First matrix */
for (int i = 0; i < x1; i++)
	for (int j = 0; j < y1; j++)
		printf("%d", m1[i][j]);
	
/* Second matrix */
for (int i = 0; i < x2; i++)
	for (int j = 0; j < y2; j++)
		printf("%d", m2[i][j]);

}
