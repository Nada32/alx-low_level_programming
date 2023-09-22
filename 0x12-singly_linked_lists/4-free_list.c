#include <stdio.h>
#include "lists.h"

/**
 * free_list - function
 * @head: parameter
 *
 * Description: prints all elements
 * Return: number of nodes
 */
void free_list(list_t *head)
{
if (head != NULL)
{
if (head->next != NULL)
free_list(head->next);
free(head->str);
free(head);
}
}

