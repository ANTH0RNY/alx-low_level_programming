#include <stdlib.h>
#include "main.h"
/**
 *create_array - creat s
 *@size: size of array
 *@c: content of array
 *Return: s
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
