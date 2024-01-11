#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* sum_dlistint - finds sum pf elements in dlinkedlist
* @head:  pointer to dlinkedlist node
* Return: int sum of elements or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}

