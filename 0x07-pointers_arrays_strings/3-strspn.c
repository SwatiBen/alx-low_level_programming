#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - function
 * @s: string
 * @accept: accept
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = strspn(s, accept);

	return (length);
}
