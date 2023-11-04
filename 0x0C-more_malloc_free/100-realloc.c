#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - function that reallocates memory block
  * @ptr: pointer to previously allocated memory
  * @old_size: size of old memory block
  * @new_size: size of new memory block
  * Return: return void
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
char *ptr;
unsigned int e;
if (new_size == old_size)
{
return (ptr);
}
 
