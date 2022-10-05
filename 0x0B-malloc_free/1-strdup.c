#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fun
 * @str: sting
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++);
	
	ch = (char *)malloc(sizeof(char) * (a + 1));

	if (ch == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		ch[b] = str[b];

	return (ch);
}
