#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* get_dnodeint_at_index - get node at sepecific index in dlinkedlist
* @head:  pointer to dlinkedlist node
* @n:int index of dlinkedlist node that will return
* Return: pointer to struct node in case of success, or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int n)
{
	unsigned int index = 0;

	while (head)
	{
		if (index == n)
			return (head);
		index++;
		head = head->next;
	}
	return (NULL);
}
