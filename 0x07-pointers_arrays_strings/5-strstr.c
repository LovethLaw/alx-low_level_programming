#include "main.h"
/**
 * _strstr - locate a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: if the substring is located - a pointer to the begining of the located substring
 * if the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*needle);
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
		      index {
				if (needle[index = 1] == '\0')
					return (haystack);
			} while (haystack[index] == needle[index]);
		}
		haystack;
	}
	return ('\0');
}
