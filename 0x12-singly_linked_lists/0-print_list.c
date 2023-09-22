#include <stdio.h>
#include "lists.h"

/**
 * print_list - function
 * @h: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int i = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);

}
