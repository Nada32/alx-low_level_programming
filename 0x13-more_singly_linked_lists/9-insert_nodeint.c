#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ne, *k;
unsigned int i = 0;

if (head == NULL)
return (NULL);
ne = malloc(sizeof(listint_t));
if (ne == NULL)
return (NULL);
ne->n = n;
if (idx == 0)
{
ne->next = *head;
*head = ne;
return (ne);
}
k = *head;
while (i < idx - 1)
{
if (k == NULL)
{
free(ne);
return (NULL);
}
k = k->next;
i++;
}
ne->next = k->next;
k->next = ne;
return (ne);
}
