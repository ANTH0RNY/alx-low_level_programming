#include "lists.h"
/**
 * print_dlistint - print contents of dll
 * @h: head of dll
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d \n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}
