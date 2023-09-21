#include     <stdio.h>
#include "lists.h"
/**
 * list_len -  prints and return the number of elements of a list_t list.
 * @h: pointer to list printed.
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
