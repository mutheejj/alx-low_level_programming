#include "lists.h"
/**
 * sum_listint - returns the sum
 * @head: ia a pointer
 * Return: the data of the list
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;
	int data = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head)
		{
			data += head->n;
			head = head->next;
			count++;
		}
	}
	return (data);
}
