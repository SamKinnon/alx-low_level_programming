#include "lists.h"

/**
 * sum_listint - return the sum of the list
 * @head: pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
