#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - uses malloc to allocate memory
  * @b: function parameter
  * Return: return pointer
  */

void *malloc_checked(unsigned int b)
{
char *result;
result = malloc(b);
if (result == NULL)
{
	exit(98);
}
else
return (result);
}
