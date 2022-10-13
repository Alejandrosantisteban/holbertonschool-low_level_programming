#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array name
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int size;
	int x;

	size = 0;
	while (*(a + size) != '\0')
		size++;
	for (x = 0; x < n; x++)
	{
		if (x < (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}

