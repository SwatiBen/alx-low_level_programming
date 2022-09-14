#include <stdio.h>

/**
 * main - go to the function
 * Description: pritn the fun
 * Return: -
 */

int main(void)
{
	int w, boln, boln1;
	long int n1, n2, fn, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boln = boln1 = 1;
	printf("%ld, %ld", n1, n2);
	for (w = 0; w < 96; w++)
	{
		if (boln)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (boln)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boln1 = 0;
			}
			fn2 = (n11 + n22);
			fn = n1 + n2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fn;
			n22 = (fn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boln == 1)
			boln = 0;
	}
	printf("\n");
	return (0);
}


