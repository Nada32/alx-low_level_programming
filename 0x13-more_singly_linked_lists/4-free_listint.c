#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
void free_listint(listint_t **head)
{
listint_t *em;

while (head)
{
em = head->next;
free(head);
head = em;
}}

