#include "main.h"
/**
 **_memcpy - cpy specific number
 *@dest: destination
 *@src: source
 *@n: number
 *Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

