#include <stdio.h>
#include "main.h"
/**
 * _sqrt - function
 * @n: the num
 * @i: num
 * Return: 0
 */
int _sqrt(int n, int i )
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
