#include "lists.h"
/**
 * dlistint_len - len of dll
 * @h: head of dll
 *
 *Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t len = 0;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
