#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - function that searches a string
 * @s: main string
 * @accept: search stirng
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	return (result);
}
