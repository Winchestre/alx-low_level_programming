#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
