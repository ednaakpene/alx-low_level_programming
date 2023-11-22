#include "lists.h"
/**
 * add_nodeint_end - adds a node to the linked list(listint_t)end
 * @head: node head
 * @n: parameter of function above
 * Return: return address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new__node;
listint_t *new_head = *head;
new__node = malloc(sizeof(listint_t));

if (new__node == NULL)
	{
	return (NULL);
	}

new__node->n = n;
new__node->next = NULL;

if (*head == NULL)
	{
	*head = new__node;
	return (new__node);
	}

while (new_head->next != NULL)
	{
	new_head = new_head->next;
	}
new_head->next = new__node;
return (*head);
}
