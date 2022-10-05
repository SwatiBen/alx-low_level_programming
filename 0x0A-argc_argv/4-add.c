#include <stdio.h>
#include <stdlib.h>
/**
 * main - fun
 * @argv: argument of array
 * @argc: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
