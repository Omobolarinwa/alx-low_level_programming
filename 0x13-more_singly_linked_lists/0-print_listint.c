#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: linked list to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t size = 0;

while(h != NULL)
{
size++;
print("%d\n", h->n);
h = h->next;
}
return(size);
}
