#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - fun to locate sub string
 * @haystack: the main string
 * @needle: search string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	return (result);
}
