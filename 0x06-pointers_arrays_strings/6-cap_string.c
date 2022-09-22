#include "main.h"

/**
 * cap_string - function
 * @c: char
 * Description: the return the fun
 * Return: 1 or 0
 */

char *cap_string(char *c)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(c + count) >= 97 && * (c + count) <= 122)
		*(c + count) = *(c + count) -32;
	count++;
	while (*(c + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(c + count) == sep_words[i])
			{
				if ((*(c + (count +1)) >= 97) && (*(c + (count + 1)) <= 122))
					*(c + (count + 1)) = *(c (count + 1)) - 32;
				break;
			}
		}
		count ++;
	}
	return (c);
}

