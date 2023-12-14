#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 20


int main() {
	srand(time(NULL));
	int i, j, m, n, a[SIZE][SIZE];

	printf("Enter the width of massive(<=20):");
	scanf_s("%d", &n);

	printf("Enter the height of massive(<=20):");
	scanf_s("%d", &m);

	for (i = 0; i < m; i++)
	{	// Рядок, який іде з ліва направо ми створюємо як зазвичай
		for (j = 0; j < n; j++) 
		{
			a[i][j] = i*n + j + 1;
			printf("%4d", a[i][j]); 
		}
		printf("\n");
		// Переходимо на наступний рядок і нумеруємо його в порядку зменшення
		i++;
		j--;
		for (j; j >= 0; j--)
		{
			a[i][j] = i * n + j + 1;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}