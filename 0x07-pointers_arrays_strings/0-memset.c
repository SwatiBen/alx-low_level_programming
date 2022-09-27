#include "main.h"
#include <stdio.h>
/**
 * _memset - fun to put constant byte
 * @s: memory area
 * @b: cont byte
 * @n: number
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
