#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
int pop_listint(listint_t **head)
{
int a = 0;
listint_t *new_node;

if (*head == NULL)
return (0);
a = (*head)->n;
new_node = *head;
*head = (*head)->next;
free(new_node);

return (a);
}

