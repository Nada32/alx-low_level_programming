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
size_t i = 0;
listint_t *ne;

while (*h && *h > (*h)->next)
{
ne = (*h)->next;
free(*h);
*h = ne;
++i;
}
if (*h)
{
free(*h);
++i;
}
*h = NULL;
return (i);
}
