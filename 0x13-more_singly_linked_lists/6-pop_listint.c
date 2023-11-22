#include "lists.h"
/**
 * pop_listint - function that deletes the head node of linked list(listint_t)
 * @head: head node
 * Return: the data in head node
 */
int pop_listint(listint_t **head)
{
listint_t *new_head;
int num_node;

if (head == NULL || *head == NULL)
	{
	return (0);
	}
num_node = (*head)->n;
new_head = (*head)->next;
free(*head);
*head = new_head;
return (num_node);
}
