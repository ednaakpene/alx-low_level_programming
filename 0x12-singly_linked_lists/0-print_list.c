#include "lists.h"
/**
  * print_list - prints the elements of given list
  * @h: parameter of function (name of linked list)
  * Return: return the numbeermof nodes
  */

size_t print_list(const list_t *h)
{
size_t num_node;

num_node = 0;
while (h != NULL)
{
	if (h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	h = h->next;
	num_node++;

}
return (num_node);
}

