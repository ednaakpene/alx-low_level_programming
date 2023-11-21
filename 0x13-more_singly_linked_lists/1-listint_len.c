#include "lists.h"
/**
 * listint_len - returbns number of elements in a linked list (listint_t)
 * @h: linked list(listint_t)
 * Return: return numbber of nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t num_node = 0;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
