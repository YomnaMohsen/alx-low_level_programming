#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - insert node at sepecific index in list
* @head: pointer to the address of head  node
* @idx:int index of node tat will return
* Return: int 1 if succeeded or -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int index = 0;
	listint_t *tmp, *t;

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
	return (1);
}
