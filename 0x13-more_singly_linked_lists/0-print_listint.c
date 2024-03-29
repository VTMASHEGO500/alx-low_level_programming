#include "lists.h"
/**
 * print_listint - Prints all the elements for a listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
