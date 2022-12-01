#include "lists.h"
/**
 *listint_len - list length
 *@h: the head of the list
 *Return: size
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	size_t num = 0;

	for (p = h; p != NULL; p = p->next)
	{
		num++;
	}

	return (num);
}
