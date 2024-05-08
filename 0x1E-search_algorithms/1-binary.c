#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if
 *	value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		size_t i;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			left = mid + 1;
		}

		else
			right = mid - 1;
	}

	return (-1);
}
