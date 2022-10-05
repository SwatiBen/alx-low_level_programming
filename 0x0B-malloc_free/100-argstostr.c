#include "main.h"
#include <stdlib.h>
/**
 * argstostr - fun
 * @ac: input fun
 * @av: aray
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b;
	int c = 0;
	int d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
			str[c++] = '\n';
	}
	return (str);
}
