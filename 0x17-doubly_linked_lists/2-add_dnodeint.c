#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_dnodeint - add  elemnets at head of  list
* @head: adress of  pointer to dlinkedlist node
* @n:int value added to head of dlinkedlist
* Return: pointer to struct node in case of success, or null
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (*head != NULL)
		(*head)->prev = tmp;
	tmp->next = *head;
	tmp->prev = NULL;
	*head = tmp;
	return (tmp);
}
