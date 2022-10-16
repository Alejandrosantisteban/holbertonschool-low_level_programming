#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: if the substring is located - pointer to the beginning
 *                                       of the located substring
 *                                       if the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;

			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return ('\0');
}
