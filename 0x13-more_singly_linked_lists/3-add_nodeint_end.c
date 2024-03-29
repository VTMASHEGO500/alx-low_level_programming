#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer of the first node in the list
 * @n: insert the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = NULL;
		return (new);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}
