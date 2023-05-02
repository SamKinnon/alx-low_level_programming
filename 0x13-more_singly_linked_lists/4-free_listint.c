#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
