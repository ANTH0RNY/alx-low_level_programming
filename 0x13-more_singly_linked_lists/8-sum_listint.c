#include "lists.h"
/**
 *sum_listint - sum of int
 *@head: the starting node
 *Return: int
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
