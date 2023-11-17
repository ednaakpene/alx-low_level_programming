#include "lists.h"
/**
  * add_note_end - function that adds new node to the list(list_t) end
  * @head: node head
 * @str: string parameter
 *Return: return neww address
 */

list_t *add_node_end(list_t **head, const char *str)
{

unsigned int e;
unsigned int countnum = 0;
list_t *new__node;
list_t *new_head;

new__node = malloc(sizeof(list_t));
if (new__node == NULL)
{
	return (NULL);
}
new__node->str = strdup(str);

for (e = 0; str[e] != '\0'; e++)
{
	countnum++;
}

new__node->len = countnum;
new__node->next = NULL;
new_head = *head;
if (new_head != NULL)
{
while (new_head->next != NULL)
{
	new_head = new_head->next;
}
new_head->next = new__node;
}
else
*head = new__node;

return (*head);

}
