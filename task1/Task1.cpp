#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 4

int main() {
	srand(time(NULL));
	int i, j, max, prod = 1, mass[SIZE][SIZE];

	for (i = 0; i < SIZE; i++) // Двомірний масив заповнюється рандомними елементами
	{
		for ( j = 0; j < SIZE; j++)
		{
			mass[i][j] = rand() % 100;
			printf("%3d", mass[i][j]);
		}
		printf("\n");
	}

	for ( i = 0; i < SIZE; i++)
	{
		max = mass[i][0];
		for ( j = 1; j < SIZE; j++)
		{
			if (mass[i][j] > max)
				max = mass[i][j];
		}
		prod *= max; //Кожен раз добуток домножується на максимальне число
					 // відповідного рядка.
	}
	printf("\nProduct of the biggest numbers of each line is: %d\n", prod);

	return 0;
}