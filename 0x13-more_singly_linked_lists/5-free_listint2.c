#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list
 * @head: pointer to first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
