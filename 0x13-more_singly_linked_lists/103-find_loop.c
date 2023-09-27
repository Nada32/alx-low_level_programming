#include <stdio.h>
#include "lists.h"

/**
 * *find_listint_loop - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s = head;
listint_t *f = head;
while (s != NULL && f != NULL && f->next != NULL)
{
s = s->next;
f = (f->next)->next;
if (s == f)
{
s = head;
while (s != f)
{
s = s->next;
f = f->next;
}
return (s);
}
}
return (NULL);
}
