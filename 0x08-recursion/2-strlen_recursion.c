#include "main.h"
/**
 *_strlen_recursion - lenth of string
 *@s: input string
 *Return: int
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		return (0);
	}
	i++;
	return (i + _strlen_recursion(s + 1));
}
