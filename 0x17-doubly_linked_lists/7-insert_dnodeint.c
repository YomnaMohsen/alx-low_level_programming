#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* insert_dnodeint_at_index - insert node at sepecific index in dlinkedlist
* @h: addrss of pointer to head
* @idx: index of the list where the new node should be added
* @n: int value in added node
* Return: pointer to dlinked list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int index = 0;

	tmp = *head;
	if (idx == 0)
	{
		return (add_dnodeint(head, n));
	}
	while (index < (idx - 1))
	{
		if ((tmp == NULL) || tmp->next == NULL)
			return (NULL);
		index++;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(head, n));

	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	new->next->prev = new;
	return (new);
