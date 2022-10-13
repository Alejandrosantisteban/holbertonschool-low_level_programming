#include "main.h"

/**
 * *_strcpy - copies a string from a pointer to a buffer
 * @dest: buffer
 * @src:  string
 *
 * Return: void
 *       */
char *_strcpy(char *dest, char *src)
{
	int size;
	int x;

	size = 0;
	while (*(src + size) != '\0')
		size++;
	for (x = 0; x <= size; x++)
	{
		*(dest + x) = src[i];
	}
	return (dest);
}

