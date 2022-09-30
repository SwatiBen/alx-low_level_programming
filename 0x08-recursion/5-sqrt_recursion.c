#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - main fun
 * @n: int n
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - fun
 * @n: integer
 * @i: int
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i *i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
