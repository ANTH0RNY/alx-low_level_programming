#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list.
 * @h: llist node
 * Return: node number
 */
size_t print_list(const list_t *h)
{
	int hold = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		hold++;
		h = h->next;
	}
	return (hold);
}
