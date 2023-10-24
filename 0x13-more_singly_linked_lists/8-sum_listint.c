#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* sum_listint - finds sum pf elements in linkedlist
* @head:  pointer to struct node
* Return: int sum of elements or 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}

