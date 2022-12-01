#include "lists.h"
/**
 *delete_nodeint_at_index - delete node
 *@head: the starting node
 * @index: the index of the node
 *Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *hold, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	hold = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (hold->next == NULL)
			return (-1);
		hold = hold->next;
	}
	next = hold->next;
	hold->p = p->p;
	free(p);
	return (1);
}
