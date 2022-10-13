#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int size;
	int half;
	int x;

	size = 0;
	while (*(str + size) != '\0')
		size++;
	if (size % 2 != 0)
		half = (size - 1) / 2;
	else
		half = size / 2;
	for (x = (size - half); x < size; x++)
		_putchar(str[x]);
	_putchar(10);
}

