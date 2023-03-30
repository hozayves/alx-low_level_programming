#include "lists.h"
/**
 * list_len - A function that returns the number of
 * elements in the linked list_t list
 *
 * @h: pointer to head first node
 *
 * Return: Nummber of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		/*count number of nodes*/
		i++;
		/*go to the next node*/
		h = h->next;
	}
	return (i);
}
