#include "main.h"
/**
 *  _isdigit - digit checker
 *   @w: input
 *   Description: this prints
 *   Return: 0
 */

int _isdigit(int w)
{
	if ((w >= '0') && (w <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
