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
	unsigned int c;

	for (c = 0; c < n; c++)
		*(s + c) = b;

	return (s);
}
