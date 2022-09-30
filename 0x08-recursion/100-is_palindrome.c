#include "main.h"
/**
 * _strlen_recursion - fun
 * @s: pointer chain
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
/**
 * palidrone - fun
 * @s: chaine
 * @l: ni
 * Return: 0
 */
int palidrone(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (palidrone(s + 1, l - 2));
	return (0);
}
/**
 * is_palindrome - fun
 * @s: chain
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palidrone(s, len - 1));
}
