#include "lists.h"
/**
 *add_nodeint - add a node
 *@head: the head of the list
 *@n: the int of the list
 * Return: the return value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}

