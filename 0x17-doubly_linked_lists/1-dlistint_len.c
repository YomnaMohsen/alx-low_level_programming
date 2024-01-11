#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - prints all elemnets in list
* @h: pointer to dlinkedlist node
* Return: int count
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
