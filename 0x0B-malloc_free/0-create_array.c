#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: array size
  * @c: character
  * Return: return pointer , ot NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int e;

if (size == 0)
{
	return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
	return (NULL);
}

for (e = 0; e < size; e++)
	arr[e] = c;
return (arr);
}
