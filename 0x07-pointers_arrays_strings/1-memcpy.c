#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - copy the location
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
		retun (dest);
}
