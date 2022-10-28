#include "main.h"
/**
 **_strncpy - function
 *@dest: destination
 *@src: source
 *@n: input
 *Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
