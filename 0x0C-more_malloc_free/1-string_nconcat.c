#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates string
 * @s1: first string
 * @s2: second string
 * @n: lenth of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i;

	if  (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0' && len2 <= n)
	{
		len2++;
	}
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - len1];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
