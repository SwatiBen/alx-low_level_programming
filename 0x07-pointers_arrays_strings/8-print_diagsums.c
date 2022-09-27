#include <stdio.h>
/**
 * print_diagsums - function to print
 * @a: matrix
 * @size: the length ofo matrix
 * Return: 1 or 0
 */
void print_diagsums(int*a, int size)
{
	int i = 0, *ptr, j = 0;

	for (i = 0; i < size; i++)
	{
		ptr = a;
		for (j = 0; j < size; j++)
			printf("%d ",ptr[j]);
		ptr++;
		print("\n");
	}
}
