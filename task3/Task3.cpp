#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE1 3
#define SIZE2 4


int main() {
	srand(time(NULL));
	int i, j, a[SIZE1][SIZE2], b[SIZE2][SIZE1], c[SIZE1][SIZE2];

	printf("\n A:\n");
	for (i = 0; i < SIZE1; i++)
	{
		for (j = 0; j < SIZE2; j++)
		{
			a[i][j] = rand() % 100;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n B:\n");

	for (i = 0; i < SIZE2; i++)
	{
		for (j = 0; j < SIZE1; j++)
		{
			b[i][j] = rand() % 100;
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}

	printf("\n C = A + Bt\n");
	for (i = 0; i < SIZE1; i++)
	{
		for (j = 0; j < SIZE2; j++)
		{
			c[i][j] = a[i][j] + b[j][i]; // З матриці b беруться єлементи так,
										 // ніби вона транспонована
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}