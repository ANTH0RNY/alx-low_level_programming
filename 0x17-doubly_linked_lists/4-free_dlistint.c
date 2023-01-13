#include "lists.h"
/**
 * free_dlistint - free dll
 * @head: head of dll
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_dlistint(head->next);
	free(head);
}
