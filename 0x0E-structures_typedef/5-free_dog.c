#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees allocated memory for a dog structure
 * @d: memory to free
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}


