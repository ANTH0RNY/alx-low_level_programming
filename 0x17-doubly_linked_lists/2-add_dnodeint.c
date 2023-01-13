#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of dll
 * @head: head of dll
 * @n: the int to add
 *
 *Return: dlistint_t ptr
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	/* creat mem with malloc check for null */
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
