#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees linked list
* @h: address of head  pointer of  struct node
* Return: Nothing
*/
void  free_listint2(listint_t **h)
{
	listint_t *tmp;

	if (h == NULL)
		return;
	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	h = NULL;
}
