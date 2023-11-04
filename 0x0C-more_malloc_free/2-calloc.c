#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _calloc - allocates a memory for an array
  * @nmemb: number of elements of array
  * @size: size of array
  * Return: return NULL if fail
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *result;
unsigned int e;
if (nmemb == 0 || size == 0)
{
	return (NULL);
}
result = malloc(nmemb * size);
if (result == NULL)
{
	return (NULL);
}
while (e < nmemb * size)
{
result[e] = 0;
e++;
}
return (result);
}
