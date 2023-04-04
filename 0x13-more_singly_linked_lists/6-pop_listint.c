#include "lists.h"
/**
 * pop_listint - A function that delete the head node
 *
 * @head: a pointer to first node
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int nber;
	listint_t *ptr, *current;
	/* if lists is empty return 0*/
	if (*head == NULL)
		return (0);
	/*settting a heading address to ptr*/
	ptr = *head;
	/* get add of next node */
	current = ptr->next;
	/* get element of the first node */
	nber = current->n;
	/* free first node */
	free(current);
	/* set head to second node */
	*head = current;
	
	/* return elements fo the first node*/
	return (nber);
}
