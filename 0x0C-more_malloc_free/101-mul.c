#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - fun
 * @argc: argument
 * @argv: array
 * Return: integer
 */
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
