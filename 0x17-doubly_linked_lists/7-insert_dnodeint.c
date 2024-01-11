#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* insert_dnodeint_at_index - insert node at sepecific index in dlinkedlist
* @head:  pointer to the address of head node
* @idx:int index of node tat will return
* @n: number in the node that will be inserted
* Return: pointer to struct node inserted in  case of success, or null
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new, *tmp;

	tmp = *head;
	if (idx == 0)
	{
		return (add_dnodeint(head, n));
	}
	while (index < (idx - 1))
	{
		if ((tmp == NULL) || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		index++;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(head, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
