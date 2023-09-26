#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - function
 * @head: parameter
 * @n: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *k;

new_node = (listint_t *) malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->next = NULL;
new_node->n = n;
if (*head)
{
k = *head;
while (k->next != NULL)
k = k->next;
k->next = new_node;
}
else
*head = new_node;
return (new_node);

}
