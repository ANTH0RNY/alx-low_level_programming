#include "lists.h"
/**
 *pop_listint - pop from list
 *@head: the first item in list
 *Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	p = *head;
	*head = p->next;
	n = p->n;
	free(p);
	return (n);
}
