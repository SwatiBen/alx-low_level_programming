#include "main.h"

/**
 *  print_alphabet - entry of function
 *  Description: prints alphabets from a-z;
 *  Return: void
 */

void print_alphabet(void)
{
	char w = 'a';

	while (w <= 'z')
	{
		_putchar(w);
		w++;
	}
	_putchar('\n');
}
