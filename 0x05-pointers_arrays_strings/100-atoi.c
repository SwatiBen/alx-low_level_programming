#include "main.h"
#include <stdio.h>
/**
 * _atoi - string to integer.
 * @s: pointer to string.
 * Descriptin: print the function
 * Return: integer.
 */
int _atoi(char *s)
{
	int index, in1;
	unsigned int r;
	int sign = 1;
	char now;

	index = 0;
	r = 0;
	while (*(s + index) != '\0')
	{
		now = *(s + index);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			in1 = index;
			while (*(s + in1) > 47 && *(s + in1) < 58)
			{
				r = (r * 10) + *(s + in1) - '0';
				in1++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		r *= sign;
	return (r);
}
