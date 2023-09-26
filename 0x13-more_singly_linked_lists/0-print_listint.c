#include "lists.h"
/**
 * print_listint - lets print all the element linked to listint_t
 * @h: The list of linked listint_t that is to print
 * Return: The nodes number
 */
size_t print_listint(const listint_t *h)
{
       size_t count;

       if (h == NULL)
	       return (0);
       for (count = 0; h != NULL; count++)
       {
	       printf("%d\n", h->n);
	       h = h->next;
       }
       return (count);
}
