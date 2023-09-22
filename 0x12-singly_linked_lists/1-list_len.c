#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 * @h: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
const list_t *cur = h;
int i = 0;
while (cur != NULL)
{
cur = cur->next;
i++;
}
return (i);

}
