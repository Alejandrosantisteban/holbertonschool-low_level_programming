#include "main.h"

/**
 * puts2 - prints every other character of a string (odd)
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int size;
	int x;

	size = 0;
	while (*(str + size) != '\0')
		size++;
	for (x = 0; x <= size && *(str + x) != '\0'; x = x + 2)
		_putchar(str[i]);
	_putchar(10);
}

