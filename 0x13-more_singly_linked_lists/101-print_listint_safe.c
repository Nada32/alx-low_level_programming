#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *k, *ne;
size_t i, r;

k = head;
i = 0;

while (k != NULL)
{
ne = head;
for (r = 0; r < i; r++)
{
if (ne == k)
{
printf("-> [%p] %d\n", (void *)k, k->n);
return (i);
}
ne = ne->next;
}
printf("[%p] %d\n", (void *)k, k->n);
k = k->next;
i++;
}
return (i);
}
