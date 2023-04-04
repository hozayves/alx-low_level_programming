#include "lists.h"
/**
 * listint_len - function that returns the number of elements in 
 * a linked listint_t list
 *
 * @h: pointer to the first node
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
