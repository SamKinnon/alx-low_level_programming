#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function to print the length of a list
 * @h: head
 * Return: n numbers
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
