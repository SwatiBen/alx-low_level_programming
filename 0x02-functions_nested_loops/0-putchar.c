#include "main.h"

/*
 *  main: program entry point
 *  Description: putchar is printed with a new line
 *  Return: 0
 */

int main(void)
{ 
	char mychar[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(mychars[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
