#include "main.h"

/**
 *  _islower - function name
 *  Description: given character is checked
 *  Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
