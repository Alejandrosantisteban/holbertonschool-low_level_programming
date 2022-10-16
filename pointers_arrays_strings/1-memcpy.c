#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destinated memory area
 * @src: pointer to source memoery area
 * @n: number of bytes
 *
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (x = 0; x < n; x++)
		destination[x] - source[x];

	return (dest);
}
