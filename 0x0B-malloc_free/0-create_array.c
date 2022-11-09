#include <stdlib.h>
#include "main.h"
/**
 *create_array - creat array
 *@size: size of array
 *@c: content of array
 *Return: array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(c) * size);
	if (s == NULL)
		return (NULL);
	return (s);
}
