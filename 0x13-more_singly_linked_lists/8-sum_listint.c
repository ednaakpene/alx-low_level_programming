#include "lists.h"
/**
 * sum_listint - sums all the data in linked lsit (listint_t)
 * @head: node head
 * Return: return resulting sum
 */
int sum_listint(listint_t *head)
{
int sum_data = 0;
listint_t *new_head = head;

while (new_head != NULL)
	{
	sum_data += new_head->n;
	new_head = new_head->next;
	}
return (sum_data);
}
