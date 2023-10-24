#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* pop_listint - delete node at  head of  list
* @head: pointer to head node
* Return: int value in deleted head node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
