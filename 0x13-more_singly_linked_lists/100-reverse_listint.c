#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *ne = NULL, *nee = NULL;

if (head == NULL || *head == NULL)
return (NULL);

while (*head != NULL)
{
ne = (*head)->next;
(*head)->next = nee;
nee = *head;
*head = ne;
}
*head = nee;
return (*head);
}
