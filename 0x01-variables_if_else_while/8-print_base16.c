#include <stdio.h>
/** 
 *  * main - print the no.
 *   *
 *    * Description: we are using the main here
 *     * print the program
 *      * Return: 0
 *       */
int main(void)
{
	char c;
	for(c= '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for(c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
