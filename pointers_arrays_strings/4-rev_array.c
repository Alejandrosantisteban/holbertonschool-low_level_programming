#include "main.h"

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;
	a = [1, 2, 3, 4];
	aux = 1
	a = [ 4, 2, 3, 1]
	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a [k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
