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
	int len = width * height;

	if (len <= 0)
		return (NULL);

	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			s[i][j] = 0;

	return (s);
}
