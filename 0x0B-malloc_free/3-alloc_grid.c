#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - allocate grid size
 *@width: width of grid
 *@height: height of grind
 *Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	s = malloc(sizeof(int) * width);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < width)
	{
		s[i] = malloc(sizeof(int) * height);
		if (s[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			s[j][i] = 0;
			j++;
		}
		i++;
	}
	return (s);
}
