#include "main.c"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destinated memory area
 * @src: pointer to source memoery area
 * @n: number of bytes
 *
 * Return: char *
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int x;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (x = 0; x < n; x++)
		destination[x] - source[x];

	return (dest);
}
