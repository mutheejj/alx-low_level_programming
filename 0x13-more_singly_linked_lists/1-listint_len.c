#include "lists.h"
/**
 * listint_len - return the length of a singly linked list
 * @h: is a pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
