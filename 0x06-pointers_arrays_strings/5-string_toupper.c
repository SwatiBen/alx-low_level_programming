#include <stdio.h>
/**
 * upper - function fo char c
 * @c: the char
 * Description: to fun to char
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
