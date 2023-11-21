#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an idx
 * @head: is a pointer
 * @index: is the index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *prev;

	if (head == NULL)
	{
		return (-1);
	}
	temp = *head;
	prev = NULL;

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (-1);
	}

	if (prev == NULL)
	{
		*head = temp->next;
	}
	else
	{
		prev->next = temp->next;
	}
	free(temp);
	return (1);
}
