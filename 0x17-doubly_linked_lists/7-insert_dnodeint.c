#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at a point
 * @h: the dll head
 * @idx: the point to add
 * @n: data to add
 *
 * Return: dlistint
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	tmp = *h;
	while (count < idx)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
		count++;
	}
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmp;
	if (count != 0)
	{
		new->prev = tmp->prev;
		(tmp->prev)->next = new;
	}
	else
	{
		new->prev = NULL;
		*h = new;
	}
	tmp->prev = new;

	return (new);
}
