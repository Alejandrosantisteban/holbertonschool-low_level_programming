#include "main.h"

/**
 * _strcat - this is a funcion strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int lend = 0, x;
	int lens = 0;
	
	while (src[lens])
		lens++;

	while (dest[lend])
		lend++;

	for (x = 0; x < lens && src[x] != '\0'; x++)
	{
		dest[lend + x] = src[x];
	}
	return (dest);
}		
