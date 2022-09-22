#include <stdio.h>

/**
 * upper - function
 * @c: char
 * Description: the return the fun
 * Return: 1 or 0
 */

char upper(char c)
{
	char car;

	if (c >= 'a' && c <= 'z')
	{
		car = c + 'A' - 'a';
	}
	else
		car = c;
	return (car);
}

/**
 * cap_string - a functiojn
 * @str: character
 * Description: tis the pin
 * Return: string
 */

char *cap_string(char *str)
{
	int i;


	i = 0;
	while (str[i])
	{
		str[i] = upper(str[i];
		i++;
	}
	return (str);
}
