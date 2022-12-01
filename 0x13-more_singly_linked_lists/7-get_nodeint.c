#include "lists.h"
/**
 *get_nodeint_at_index - get node at a index
 *@head: the first node in sll
 *@index: the index to reach
 *Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
