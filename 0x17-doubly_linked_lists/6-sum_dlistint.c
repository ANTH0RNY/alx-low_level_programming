#include "lists.h"
/**
 * sum_dlistint - sum of data in a dll
 * @head: head of dll
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (tmp == NULL)
		return (sum);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
