#include "lists.h"
/**
 * add_nodeint- adds new node at list (listint_t) starting point
 *@head: head of new node
 *@n: parameter of function
 *Return: return new element address
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new__node;

	new__node = malloc(sizeof(listint_t));

	if (new__node == NULL)
	{
		return (NULL);
	}
	new__node->n = n;
	new__node->next = *head;
	*head = new__node;
	return (new__node);
}
