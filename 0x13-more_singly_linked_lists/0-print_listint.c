#include "lists.h"
/**
 * print_listint - print elements of list (listint_t)
 *@h: parameter of function (linked list)
 *Return: return number of nodes
 **/


size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
