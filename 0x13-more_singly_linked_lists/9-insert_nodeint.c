#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - return value indez
 * @gead: pointer
 * @idx: value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if(!new||!head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return(new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx -1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);

}
