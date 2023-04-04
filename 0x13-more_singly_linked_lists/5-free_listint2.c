#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list
 * @head: pointer to first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *ptr;

	if (head == NULL)
		return;
	current = *head;

	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
}
