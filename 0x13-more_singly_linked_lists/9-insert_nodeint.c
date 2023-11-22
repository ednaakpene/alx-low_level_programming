#include "lists.h"
/**
 * insert_nodeint_at_index - adds new node (at given position)in listint_t
 * @head: node head
 * @idx: position of addition of new node
 * @n: function parameter
 * Return: return address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int e;
listint_t *new__node;
listint_t *new_head = *head;
new__node = malloc(sizeof(listint_t));

	if (new__node == NULL || head == NULL)
	{
	return (NULL);
	}
new__node->n = n;
new__node->next = NULL;
if (idx == 0)
	{
	new__node->next = *head;
	*head = new__node;
	return (new__node);
	}
for (e = 0; new_head && e < idx; e++)
	{
	if (e != idx - 1)
		{
		new_head = new_head->next;
		}
	else
		{
		new__node->next = new_head->next;
		new_head->next = new__node;
		return (new__node);
		}
	}
return (NULL);
}
