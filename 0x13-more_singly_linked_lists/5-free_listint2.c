#include "lists.h"
/**
  * free_listint2 - function that frees a linked list(listint_t)
  * @head: head of list (listint_t) to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *new__head;

while (*head != NULL)
	{
	new__head = (*head)->next;
	free(*head);
	*head = new__head;
	}
head = NULL;
}
