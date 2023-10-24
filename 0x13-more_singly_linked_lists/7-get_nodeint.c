#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* get_nodeint_at_index - get node at sepecific index in list
* @head:  pointer to struct node
* @n:int index of node tat will return
* Return: pointer to struct node in case of sucess, or null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int n)
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
