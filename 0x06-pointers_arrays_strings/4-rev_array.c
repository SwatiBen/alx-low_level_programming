#include "main.h"

/**
 * reverse_array - function
 * Description: return the fun as eitner 0 or 1
 * @a: integer
 * @n: t nmver
 */

void reverse_array(int *a, int n)
{
	int b = 0, c, d, e;

	c = n - 1;
	d = c / 2;

	while (b <= d)
	{
		e = a[b];
		a[b] = a[c];
		a[c] = e;
		b++;
		c--;
	}
}
