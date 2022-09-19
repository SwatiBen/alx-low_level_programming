#include "main.h"
/**
 * _strcpy - create the string pointed to src
 * Description: copeies te stirng
 * @dest: pointer t the buffer in copu
 * @src: strign to be copied
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
