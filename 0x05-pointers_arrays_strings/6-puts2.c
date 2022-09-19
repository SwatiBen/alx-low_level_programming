#include "main.h"
/**
 * puts2 - print one char
 * Description: char print and new line
 * @str: string to print the chars from
 * Return: void
 */
void puts2(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b+= 2)
		_putchar(str[i]);
	_putchar('\n');
}	
