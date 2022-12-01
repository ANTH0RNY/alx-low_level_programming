#include "lists.h"
/**
 *insert_nodeint_at_index - insert at a index
 *@head: the starting node
 *@idx: the index to insert to
 *@n: int
 *Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *hold;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		p = *head;
		for (i = 0; i < idx - 1 && p != NULL; i++)
		{
			p = p->next;
		}
		if (p == NULL)
			return (NULL);
	}
	hold = malloc(sizeof(listint_t));
	if (hold == NULL)
		return (NULL);
	hold->n = n;
	if (idx == 0)
	{
		hold->next = *head;
		*head = hold;
		return (hold);
	}
	hold->next = p->next;
	p->next = hold;
	return (hold);
}
