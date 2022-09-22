#include "main.h"
/**
 * string_toupper - function fo char c
 * @c: the char
 * Description: to fun to char
 * Return: 1 or 0
 */
char *string_toupper(char *c)
{
	int count = 0;

	while (*(c + count) != '\0')
	{
		if ((*(c + count) >= 97) && (*(c + count) <= 122))
			*(c + count) = *(c + count) - 32;
		count++;
	}
	return (c);
}
