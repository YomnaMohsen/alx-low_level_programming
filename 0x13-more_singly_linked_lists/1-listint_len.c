#include "lists.h"
#include <stdio.h>

/**
* listint_len - prints all elemnets in list
* @h: pointer to struct node
* Return: int count
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
