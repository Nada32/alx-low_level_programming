#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function
 * @h: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int i = 0;

while (h != NULL)
{
printf("[%d] %d\n", h->len, h->deci);
h = h->next;
i++;
}
return (i);

}
