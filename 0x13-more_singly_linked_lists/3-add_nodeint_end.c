#include "lists.h"
/**
 * add_nodeint_end - A function that adds a new node at the end of a
 * listint_t list
 *
 * @head: pointer to last node
 * @n: data of the node
 *
 * Return: a pointer of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}


	while (current->next != NULL)
	{
		current  = current->next;
	}
	current->next = ptr;

	return (ptr);
}
