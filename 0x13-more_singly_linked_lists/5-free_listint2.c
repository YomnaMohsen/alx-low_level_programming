#include "lists.h"
#include <stdlib.h>

/**
* free_list -  elemnets in linked list
* @h: pointer to struct node
* Return: Nothing
*/
void  free_list(list_t *h)
{
	list_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h->str);
		free(h);
		h = tmp;
	}
}
