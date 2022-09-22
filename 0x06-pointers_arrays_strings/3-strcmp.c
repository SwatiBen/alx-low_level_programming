#include "main.h"
/**
 * _strcmp - function
 * @s1: th chain
 * @s2: chaine
 * Description: the returnthe value
 * Return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
		return (0);
	else
		return ((int)*s1 - (int)*s2);
}
