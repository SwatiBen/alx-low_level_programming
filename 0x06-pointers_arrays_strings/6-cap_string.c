#include <stdio.h>

/**
 * upper - function
 * @c: char
 * Description: the return the fun
 * Return: 1 or 0
 */

char upper(char c)
{
	char car;

	if (c >= 'a' && c <= 'z')
	{
		car = c + 'A' - 'a';
	}
	else
		car = c;
	return (car);
}
