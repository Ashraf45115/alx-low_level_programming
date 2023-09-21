#include "lists.h"

/**
 * list_len - determins length of linked list
 * @h: pointer to the first node
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
