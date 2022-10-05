#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - fun
 * @size: ithe
 * @c: characre
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(c));

	if (ch != NULL)
	{
		for (a = 0; a < size; a++)
			ch[a] = c;
	}
	return (ch);
}
