#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t
 * @h: list pointer
 * Return: the number of the elements in a linked list_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
