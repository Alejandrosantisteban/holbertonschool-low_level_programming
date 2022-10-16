#include "main.h"

/**
 * _strpbrk - searches a tring for any of a set of bytes
 * @s: the string to be searched
 * @accept:  the set of bytes to be searched for
 *
 * Return: if a set is matched - a pointer to be the matched byte
 *         if not set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}

		s++;
	}

	return ('\0');
}
