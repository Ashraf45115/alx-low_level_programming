#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: address of pointer to first node
 * Return: value of popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	a = (*head)->a;
	free(*head);
	*head = node;
	return (a);
}
