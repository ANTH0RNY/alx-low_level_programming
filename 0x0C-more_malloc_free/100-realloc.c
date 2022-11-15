#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocate block space
 *@ptr: previously allocated
 *@old_size: allocated space
 *@new_size: new space
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point, *pntr;
	unsigned int i, j;

	j = new_size;
	pntr = ptr;

	if (ptr == NULL)
	{
		point = malloc(new_size);
		return (point);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		point[i] = pntr[i];
	free(ptr);
	return (point);
}
