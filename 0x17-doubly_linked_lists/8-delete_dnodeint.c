#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at inde
 * @index: the index of node to delete
 * @head: the dll
 *
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	while (count < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	if (count != 0)
	{
		(tmp->prev)->next = tmp->next;
		if ((tmp->next) != NULL)
			(tmp->next)->prev = tmp->prev;
	}
	else
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(tmp->next)->prev = NULL;
		}
	}
	free(tmp);
	return (1);
}
