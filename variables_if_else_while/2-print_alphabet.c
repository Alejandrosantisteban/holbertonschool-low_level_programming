#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

for (d = 'a'; d <= 'z'; d++)
putchar(d);

putchar('\n');

return (0);
}
