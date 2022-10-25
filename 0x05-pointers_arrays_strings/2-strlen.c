#include "main.h"
/**
 *_strlen - length
 *@s: input
 *
 *Return: lengh
 */

int _strlen(char *s)
{
	int count;
	char *c;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
