#include "main.h"
/**
 * _strlen - output lenghth of string.
 * @s: pointer to string.
 * Description: output the length
 * Return: length of a string.
 */
int _string(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
