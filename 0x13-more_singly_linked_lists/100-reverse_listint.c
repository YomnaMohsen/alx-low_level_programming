#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* reverse_listint - reverses listint_t linkedlist
* @head: pointer to the address of head  node
* Return: pointer to listint_t linkedlist
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head)  = next;
	}
	(*head)->next = behind;
	return (*head);
}
