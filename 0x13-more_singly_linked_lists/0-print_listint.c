#include "lists.h"

/**
 * print_listint - linked list elemetn got printed
 * @n: the nnom
 * Description: the no got printed
 * Return: nom
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->a;
		a++;
		}
	}
	return (a);
}
