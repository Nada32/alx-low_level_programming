#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: parameter
 * @index: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *k, *ne;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
k = *head;
if (index == 0)
{
*head = k->next;
free(k);
return (1);
}
while (i < index - 1)
{
if (k->next == NULL)
return (-1);
k = k->next;
i++;
}
ne = k->next;
k->next = ne->next;
free(ne);
return (1);
}
