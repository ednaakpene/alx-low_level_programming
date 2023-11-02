#include "main.h"

/**
  * alloc_grid - creates an array of 2D (integers)
  * @width: array width
  * @height: array height
  * Return: return pointer , or NULL if it is 0 or negative
  */

int **alloc_grid(int width, int height)
{
int **result, e, f;
if (height <= 0 || width <= 0)
{
	return (NULL);
}
result = malloc(sizeof(int *) * height);
if (result == NULL)
{
	return (NULL);
}

for (e = 0; e < height; e++)
{
result[e] = malloc(sizeof(int) * width);
	if (result[e] == NULL)
	{
		free(result);
		for (f = 0; f <= height; f++)
		{
			free(result[f]);
		}
		return (NULL);
	}
for (f = 0; f < width; f++)
	result[e][f] = 0;
}
return (result);
}
