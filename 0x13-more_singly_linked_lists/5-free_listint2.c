#include "lists.h"
/**
 *free_listint2 - free an array of sll
 *@head: head of the sll
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = (*head)->p;
		free(*head);
		*head = p;
	}
}
