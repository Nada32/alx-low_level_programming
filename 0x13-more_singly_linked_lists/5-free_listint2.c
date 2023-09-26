#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
listint_t *em;
if (head == NULL)
{
return;
}
while (*head)
{
em = *head->next;
free(*head);
*head = em;
}
*head = NULL;
}

