#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - create random passwords.
 * Description: 0
 * Return: 0
 */
int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	print("%c", 2772 - sum);

	return (0);
}
