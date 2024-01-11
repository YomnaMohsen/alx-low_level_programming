#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - add elemnets at end of double linked list
* @head: address of  pointer to dlinkedlist node
* @n:int value in new node
* Return: pointer to dlinkedlist node in case of sucess, or null
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *end;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = tmp;
		tmp->prev = end;
	}
	return (*head);
}
