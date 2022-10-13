#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int mitad;
	char temp;
	int x;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	mitad = len / 2;
	for (x = 0; x < mitad; x++)
	{
		temp = s[i];
		s[i] = s[len - 1 - x];
		s[len - 1 - x] = temp;
	}
}
