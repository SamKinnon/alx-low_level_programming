#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function
 * @head: double pointer
 * Return: 0 or n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
