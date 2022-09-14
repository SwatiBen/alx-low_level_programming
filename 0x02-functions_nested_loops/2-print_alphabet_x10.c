#include "main.h"

/**
 *  print_alphabet_x10 - Entry of the function
 *  Description: print alphabets from a-z 10 times;
 *  Return: 0
 */

void print_alphabet_x10(void)
{
	char w = 'a';
	int i = 0;

	while (i < 10)
	{
		while (w <= 'z')
		{
			_putchar(w);
			w++;
		}
		_putchar('\n');
		i++;
		w = 'a';
	}
}
