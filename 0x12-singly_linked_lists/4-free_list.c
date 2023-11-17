#include "lists.h"

/**
  * free_list - function that frees list(list_t)
  * @head: head of list
 */
void free_list(list_t *head)

{
list_t *new_head;
while (head != NULL)
{
	new_head = head->next;
	free(head->str);
	free(head);
	head = new_head;
}

}

