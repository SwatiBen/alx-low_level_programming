#include "main.h"

/**
 *  print_last_digit - name of function
 *  Description: pritn the last digit
 *  @w: convet it
 *  Return: 0
 */

int print_last_digit(int w)
{
	int n;

	n = w % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-1);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
