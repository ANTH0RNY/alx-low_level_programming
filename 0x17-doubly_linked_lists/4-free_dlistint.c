#include "lists.h"
/**
 * free_dlistint - free dll
 * @head: head of dll
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
