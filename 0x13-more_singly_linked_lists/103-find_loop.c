#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *non = head;
	listint_t *don = head;

	if (!head)
		return (NULL);

	while (non && don && don->next)
	{
		don = don->next->next;
		non = non->next;
		if (don == non)
		{
			non = head;
			while (non != don)
			{
				non = non->next;
				don = don->next;
			}
			return (don);
		}
	}

	return (NULL);
}
