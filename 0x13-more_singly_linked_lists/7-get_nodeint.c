#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node of listint_t
 *
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; i < index; i++)
	{
		if (head)
			head = head->next;
		else
			break;
	}
	return (head);
}
