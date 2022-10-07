/* #include "main.h"

 * main - fun
 * @argc: argument
 * @argv: array
 * Return: integer

int main(int argc, char *argv[])
{
	unsigned long m;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 57 || argv[a][b] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	m = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", m);
	return(0);
}
*/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory
 * @s1: input pointer
 * @s2: characters to fill
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area
*/

char *_memset(char *s1, char s2, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s1[i] = s2;
		i++;
	}
	return (s1);
}

/**
 * _calloc - function that allocates memory
 *           for an array using memset
 *
 * @nem: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nem, unsigned int size)
{
	char *ptr;

	if (nem == 0 || size == 0)
		return (NULL);
	ptr = malloc(nem * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nem * size);

	return (ptr);
}


/**
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
*/

void multiply(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);

	/* store our pointer address to free later */
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies
 *            two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on faliure
*/

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
