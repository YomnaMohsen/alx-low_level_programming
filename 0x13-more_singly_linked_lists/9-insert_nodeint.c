#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index - insert node at sepecific index in list
* @head:  pointer to the address of head  node
* @idx:int index of node tat will return
* @n: number in the node that will be inserted
* Return: pointer to struct node inserted in  case of sucess, or null
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 1;
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	tmp = tmp->next;
	while (tmp)
	{
		if (index == idx)
		{
			new->n = n;
			new->next = tmp;
			tmp = new;
			return (tmp);
		}
		index++;
		tmp = tmp->next;
	}
	return (NULL);
}
