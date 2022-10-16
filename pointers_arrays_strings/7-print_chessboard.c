#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array
 *
 * Return: void
 */
void print_cheesboard(char (*a)[8])
{
	int x;
	int i;

	for (x = 0; x < 8; i++)
	{
		for (i = 0; i < 8; i++)
			putchar(a[x][i]);
		putchar(10);
	}
}
