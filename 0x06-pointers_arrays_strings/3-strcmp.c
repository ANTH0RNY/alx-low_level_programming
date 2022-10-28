#include "main.h"
/**
 **_strcmp - function
 *@s1: s1ination
 *@s2: source
 *Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int j, count = 0, i;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if ((int)s1[count] == (int)s2[count])
		{
			count++;
			continue;
		}
		else
			return (*s1 - *s2);
	}
	return (0);

}
