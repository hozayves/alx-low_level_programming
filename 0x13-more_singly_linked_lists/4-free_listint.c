#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list
 *
 * @head: a pointer to the first head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *current;
	current = *head;

	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	*head = NULL;
}
