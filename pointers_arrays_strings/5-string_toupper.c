#include "main.h"

/**
 * string_toupper - changes all lowecase letters
 *                  of a string to uppercase
 * @str: the string to be changed
 *
 * Return: a pointer to te changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (srt[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 12;

		index++;
	}

	return (str);
}
