#include "lists.h"
/**
 *free_listint - free the list
 *@head: the head of the list
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
