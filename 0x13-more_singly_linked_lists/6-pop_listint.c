#include "lists.h"
/**
 * pop_listint - is a function tha delets the head node
 * @head: is a pointer
 * Return: headnodes data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (data);
}
