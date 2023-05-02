#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - return reversed list
 * @head: double pointer
 * Return: head of a list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
