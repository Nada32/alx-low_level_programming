#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: parameter
 * @index: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
	}
return (NULL);
}
