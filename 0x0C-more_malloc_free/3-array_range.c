#include "main.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimum value of integers
  * @max: maximum value of integers
  * Return: return value
  */

int *array_range(int min, int max)
{
int *result, e = 0;
if (min > max)
{
	return (NULL);
}
result = malloc(sizeof(int) * (max - min) + sizeof(int));
if (result == NULL)
{
return (NULL);
}
while (min <= max)
{
result[e] = min;
e++;
min++;
}
return (result);
}
