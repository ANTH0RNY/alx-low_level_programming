#include "lists.h"
/**
 *print_listint - print list
 *@h: head of string
 *Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t num = 0;

	for (p = h; p != NULL; p = p->next)
	{
		printf("%d\n", p->n);
		num++;
	}

	return (num);
}
