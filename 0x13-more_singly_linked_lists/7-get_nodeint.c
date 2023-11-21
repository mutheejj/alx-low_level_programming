#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: is a pointer
 * @index: is the index of the node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (count == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
