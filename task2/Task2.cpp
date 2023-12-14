#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 10

int main() {
	srand(time(NULL));
	int i, j, n; // Створюється масив 10 на 10
	double product = 1, mass[SIZE][SIZE];
	printf("Enter the size of massive(<=10):"); // Користувач може використовувати
	scanf_s("%d", &n);							// і не весь простір масиву.

	if (n>SIZE) {
		printf("Massive can`t be bigger than 10x10");
		return 0;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mass[i][j] = (double)(rand()) / RAND_MAX * 100 - 50;
			printf("%8.2f", mass[i][j]);
			if (mass[i][j] > 0)			// Множаться тільки додатні числа
			{
				product *= mass[i][j];
			}
		}
		printf("\n");
	}

	printf("\nProduct of positive numbers: %.2f\n", product);

	return 0;
}