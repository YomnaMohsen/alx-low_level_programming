#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* delete_dnodeint_at_index - delete node at sepecified index in dlinkedlist
* @head: pointer to the address of head  node
* @idx:int index of node tat will return
* Return: int 1 if succeeded or -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	unsigned int index = 0;
	dlistint_t *tmp, *t;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (idx == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	while (index != (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		index++;
		tmp = tmp->next;
	}
	t = tmp->next->next;
	free(tmp->next);
	tmp->next = t;
	t->prev = tmp;
	return (1);
}
