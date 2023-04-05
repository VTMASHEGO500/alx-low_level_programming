#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: if the linked list is empty return 0
 *	or  returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listin_t *temp;
	int num;

	temp = *head;
	if (temp == NULL)
		return (0);

	*head = temp->next;
	num = temp->num;
	free(temp);
	return (num);
}
