#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums - sum to print
 * @a: matrix
 * @size: the length of a matrix
 * Return: 1 or 0
 */
void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			c += *(a + b);
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			d += *(a + b);
	}
	printf("%d, %d\n", c , d);
}
