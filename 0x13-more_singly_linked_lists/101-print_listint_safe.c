#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
unsigned int i = 0;

while (head != NULL)
{
i += head->n;
head = head->next;
}
return (i);
}
