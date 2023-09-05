#include "main.h"
#include <stdlib.h>

/**
 * _strdup - lets Duplicate a new memory space that allocate string.
 * @str: The string to be duplicated.
 *
 * Return: 0 String duplicated
 */
char *_strdup(char *str)
{
	char *array = NULL;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		array[i] = str[i];
	return (array);
}
