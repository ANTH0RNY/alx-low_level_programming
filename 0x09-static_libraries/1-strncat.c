#include "main.h"
/**
 **_strncat - function
 *@dest: destination
 *@src: source
 *@n: input
 *Return: void
 */

char *_strncat(char *dest, char *src, int n)
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
		dest[count + j] = src[j];
		j++;
	}
	dest[count + j] = '\0';
	return (dest);
}
