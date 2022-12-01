#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_listint_safe - free list safe
 *@head: head of list
 *Return: size_t
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, j = 0;
	listint_t **p = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (j);
	while (*head != NULL)
	{
		for (i = 0; i < j; i++)
		{
			if (*head == p[i])
			{
				*head = NULL;
				free(p);
				return (j);
			}
		}
		j++;
		p = _ra(p, j, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(p);
	return (j);
}
