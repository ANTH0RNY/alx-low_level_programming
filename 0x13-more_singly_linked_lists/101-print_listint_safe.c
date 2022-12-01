#include "lists.h"
/**
 *_r - list list
 *@list: the list
 * @size: size of list
 * @new: the new list
 *Return: listint constant
 */


const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **p;
	size_t i;

	p = malloc(size * sizeof(listint_t *));
	if (p == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		p[i] = list[i];
	p[i] = new;
	free(list);
	return (p);
}
/**
 * print_listint_safe - safely print the list
 * @head: the head of the list
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < j; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (j);
			}
		}
		j++;
		list = _r(list, j, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (j);
}
