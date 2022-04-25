#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the node's data
 *
 * @head: head of linked list
 *
 * Return: node data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
