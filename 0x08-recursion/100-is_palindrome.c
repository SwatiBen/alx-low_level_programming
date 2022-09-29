#include "main.h"
/**
 * _strlen_recursion - fun
 * @s: chain
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palidrone - fun
 * @s: chaine
 * @taille: ni
 * @i: nikber
 * Return: 0;
 */
int palidrone(char *s, int taille, int i)
{
	if (s[i] !='0')
	{
		if (s[i] != s[taille - i])
			return (0);
		else
			return (palidrone(s, taille, i + 1));
	}
	else
		return (1);
}
/**
 * is_palindrone - fun
 * @s: chain
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palidrone(s, _strlen_recursion(s) - 1, 0));
}
