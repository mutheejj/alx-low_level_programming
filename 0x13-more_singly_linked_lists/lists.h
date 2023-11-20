#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int _putchar(char c);
/**
 * struct listint_s - is a sturcture
 * @n: is a node
 * @next: is a pointer to the next node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
