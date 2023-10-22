#include "lists.h"
#include <stdio.h>

/**
* list_len - prints all elemnets in list
* @h: pointer to struct node
* Return: int count
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
