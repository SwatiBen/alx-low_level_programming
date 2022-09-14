#include "main.h"

/**
 *  _isalpha - name of function
 *  Description: to chaeck a character
 *  @c; to check character
 *  Return: 0
 */

int _isalpha(int w)
{
	char s = w >= 'a' && w <= 'z';
	char d = w >= 'A' && w <= 'Z';

	if (s || d)
		return (1);
	else
		return (0);
}
