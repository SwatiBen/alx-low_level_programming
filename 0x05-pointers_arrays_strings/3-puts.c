#include "main.h"
/**
 * _puts - prints string.
 * @s: pointer to string.
 * Description: print the no.
 * Return: void.
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		i++;
		s++;
	}
	_putchar('\n');
}
