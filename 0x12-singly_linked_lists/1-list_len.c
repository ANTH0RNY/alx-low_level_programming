#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - length of sl list
 * @h: starting list
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int hold = 0;

	while (h)
	{
		hold++;
		h = h->next;
	}
	return (hold);
}
