#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function
 * @head: parameter
 * @n: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
list_t *new_node;

new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;


while (temp->next != NULL)
temp = temp->next;
temp->next = *head;
return (new_node);

}
