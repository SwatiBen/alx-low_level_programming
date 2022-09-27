#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - function
 * @s: string
 * @c: character
 * Return: or null
 */
char *_strchr(char *s, char c)
{
	char *a;

	a = strchr(s, c);
	return (a);
}
