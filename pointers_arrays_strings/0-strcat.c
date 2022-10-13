#include "main.h"

/**
 * *_strcat - appends an string to another string
 * @dest: original string
 * @src: string to be appended
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int n = 0;

	while (*(dest + x) != '\0')
		x++;
	while (*(src + n) != '\0')
        {
		dest[x + n] = src[n];
		n++;
	}
	return (dest);
}
