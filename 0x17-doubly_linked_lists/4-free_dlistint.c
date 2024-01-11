#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint -  elemnets in dlinked list
* @h: pointer to dlinkedlist node
* Return: Nothing
*/
void  free_dlistint(dlistint_t *h)
{
	dlistint_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
