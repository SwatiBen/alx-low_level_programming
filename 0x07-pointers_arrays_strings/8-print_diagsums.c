#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum to print
 * @a: matrix
 * @size: the length of a matrix
 * Return: 1 or 0
 */
void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < size; b++)
	{
		c += *(a + (size * b + b));
		d += *(a + (size * b + size - 1 - b));
	}
	print("%d, ", c);
	print("%d\n", d);
}
