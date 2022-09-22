#include "main.h"
/**
 * reverse_array - function
 * Description: return the fun as eitner 0 or 1
 * @a: integer
 * @n: t nmver
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a +j);
			*(a + j) = *(a + j);
			*(a + (j - 1)) = temp;
		}
	}
}
