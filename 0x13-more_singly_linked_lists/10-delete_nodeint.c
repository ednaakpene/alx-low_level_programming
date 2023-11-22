#include "lists.h"
/**
 * delete_nodeint_at_index - removes a node in a linked list(listint_t)
 * @head: head of node
 * @index: index of the node to be  deleted
 * Return: return on Success, or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *new_head = *head;
listint_t *cur_node = NULL;
unsigned int e = 0;

if (*head == NULL)
	{
	return (-1);
	}
if (index == 0)
	{
	*head = (*head)->next;
	free(new_head);
	return (1);
	}
while (e < index - 1)
	{
	if (new_head == NULL || (new_head->next) == NULL)
		{
		return (-1);
		}
	new_head = new_head->next;
	e++;
	}
cur_node = new_head->next;
new_head->next = cur_node->next;
free(cur_node);
return (1);
}
