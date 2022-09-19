#include "main.h"
/**
 * print_rev - print a string
 * @s: string print
 * Description: pritn reverse string
 * Return void
 */
void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;

	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
