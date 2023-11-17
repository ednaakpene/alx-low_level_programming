#include "lists.h"
/**
  * add_node - function that adds new node to the list(list_t) beginning
  * @head: node head
 * @str: string parameter
 *Return: return neww address
 */

list_t *add_node(list_t **head, const char *str)
{

unsigned int e;
unsigned int countnum = 0;
list_t *new__node;

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
new__node->next = *head;
*head = new__node;

return (*head);

}
