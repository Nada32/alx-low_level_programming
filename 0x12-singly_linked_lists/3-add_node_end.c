#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function
 * @head: parameter
 * @str: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = NULL;

new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->next = NULL;

if (head != NULL)
{
list_t *temp = *head;

while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}
return (new_node);

}
