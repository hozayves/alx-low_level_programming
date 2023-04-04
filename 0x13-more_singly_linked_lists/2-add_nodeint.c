#include "lists.h"
/**
 * add_nodeint - A function that adds a new node at the beginning of
 * a list_t list
 *
 * @head: pointer to the first node
 * @n: data of the node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
