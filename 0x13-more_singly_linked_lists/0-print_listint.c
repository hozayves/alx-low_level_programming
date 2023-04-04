#include "lists.h"
/**
 * print_listint - function that prints all elements of a listint_t
 *
 * @h: pointer to structure
 *
 * Return: a number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		node_count++;
		h = h->next;
	}
	return (node_count);
}
