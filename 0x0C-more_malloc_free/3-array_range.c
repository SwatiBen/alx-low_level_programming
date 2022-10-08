#include "main.h"
#include <stdio.h>
/**
 * array_range - fin
 * @min: minumum
 * @max: maximum
 * Return: somethosnf
 */
int *array_range(int min, int max)
{
	int *a;
	int i, l;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	a = malloc(sizeof(int) * l);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		a[i] = min++;

	return (a);
}
