#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function
 * @h: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *k, *ne, *head;
size_t hh, r;

if (h == NULL || *h == NULL)
return (0);
k = *h;
head = *h;
hh = 0;
while (head != NULL)
{
ne = *h;
for (r = 0; r < hh; r++)
{
if (ne == k)
{
*h = NULL;
return (hh);
}
ne = ne->next;
}
k = head->next;
free(head);
head = k;
hh++;
}
*h = NULL;
return (hh);
}
