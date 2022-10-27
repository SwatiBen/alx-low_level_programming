#include "lists.h"

/**
 * print_listint - linked list elemetn got printed
 * @n: the nnom
 * Description: the no got printed
 * Return: nom
 */

size_t print_listint(const listint_t *h)
{
	int no = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			no++;
			h = h->next;
		}
	}

	return (no);
}
