#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted list of integers
 * @list: pointer to the head of the list to search in
 *
 * @value: value to search for.
 * Return: pointer to the first node where value is located or NULL if
 *	value is not present in head or if head is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = NULL, *pause = NULL;

	if (list == NULL)
		return (NULL);

	node = list;
	while (node && node->express && node->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       node->express->index, node->express->n);
		node = node->express;
	}
	pause = node;
	while (pause && pause->next != pause->express)
		pause = pause->next;

	if (node->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       node->express->index, node->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       node->index, node->express->index);
	}

	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       node->index, pause->index);

	while (node != pause && node->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       node->index, node->n);

	if (node == pause)
		return (NULL);
	return (node);
}
