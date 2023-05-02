#include "lists.h"

/**
 * get_nodeint_at_index - function return nth of node of a list
 * @head: pointer
 * @index: index of the node, starting at 0
 * Return:temp or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
