#include "lists.h"
#include <stdlib.h>

/**
* free_listint -  elemnets in linked list
* @h: pointer to struct node
* Return: Nothing
*/
void  free_listint(listint_t *h)
{
	listint_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
