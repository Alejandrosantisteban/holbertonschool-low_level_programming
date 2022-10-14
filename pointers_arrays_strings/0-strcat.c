#include "main.h"

/**
 * _strcat - this is a funcion strcat
 * @dest: first param
 * @src: second param 
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, x;

	while (dest[len])
		len++;

	for (x = 0; src[x] != 0; x++)
	{
		dest[len] = src[x];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
