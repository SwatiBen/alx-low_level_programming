#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * Description: using the function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int i = 0;
	/* here is the main thing */
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
