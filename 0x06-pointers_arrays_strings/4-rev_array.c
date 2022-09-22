#include "main.h"
/**
 * reverse_array - function
 * Description: return the fun as eitner 0 or 1
 * @a: integer
 * @n: t nmver
 */
void reverse_array(int*a, int n)
{
	int b = 0, ta, c;
	int d;
	
	ta = n - 1;
	c = ta / 2;

	while (b <= c)
	{
		d = a[b];
		a[b] = a[ta];
		a[ta] = d;
		b++;
		ta--;
	}
}
