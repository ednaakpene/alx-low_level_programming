#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of (listint_t)
 * @head: head of node
 * @index: index of the node (0 starting point)
 * Return: return nth node of linked list(listint_t)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int e = 0;
listint_t *new_head = head;

while (new_head && e < index)
	{
	new_head = new_head->next;
	e++;
	}
if (new_head)
	{
	return (new_head);
	}
else
	{
	return (NULL);
	}
}
