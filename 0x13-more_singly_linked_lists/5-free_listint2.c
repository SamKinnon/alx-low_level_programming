#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next;
	
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
