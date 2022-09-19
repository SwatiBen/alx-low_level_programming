#include "main.h"
/**
 * puts2 - print one char
 * Description: char print and new line
 * @str: string to print the chars from
 * Return: void
 */
void puts2(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
