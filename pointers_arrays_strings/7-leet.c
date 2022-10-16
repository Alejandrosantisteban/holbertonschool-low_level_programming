#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 *
 * Return: ponter to the encoded string
 */
char *leet(char *str)
{
	int x;
	int i;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[x] == letters[i])
				str[x] = numbers[i / 2];
		}
	}
	return (str);
}
