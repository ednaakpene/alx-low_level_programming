#include "lists.h"

/**
  * list_len - function that returns number of elements in linked list(list_t)
  * @h: parameter of function that points to linked list
  * Return: return number of elements
  */
size_t list_len(const list_t *h)
{
size_t num_node = 0;
while (h != NULL)
{
h = h->next;
num_node++;
}
return (num_node);
}
