#include "lists.h"
/**
 * add_nodeint_end - adda at the end
 * @head: is a pointer
 * @n: is the data
 * Return: the address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *prev;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
	{
		return (NULL);
	}

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	prev = *head;

	while (prev->next != NULL)
	{
		prev = prev->next;
	}

	prev->next = last;
	return (last);
}


