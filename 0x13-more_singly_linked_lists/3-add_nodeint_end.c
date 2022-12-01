#include "lists.h"
/**
 *add_nodeint_end - add node at the end
 *@head: the head of the list
 *@n: the size of the list
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
	*head = current;
		return (current);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = current;
	return (current);
}

