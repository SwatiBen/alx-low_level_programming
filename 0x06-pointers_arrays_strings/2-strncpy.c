#include "main.h"
/**
 * _strncpy - function
 * @dest: chain
 * @src: the chaine
 * @n: ch eh number
 * Description: the no to retun
 * Return: 1 or 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
