#include <stdio.h>
/**
 * main - fun
 * @argc: array
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num;

	for (num = 0; num < argc; num++)
		printf("%s\n", argv[num]);

	return (0);
}
