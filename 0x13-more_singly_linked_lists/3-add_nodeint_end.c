#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - add elemnets at end of linked list
* @head: adress of  pointer to struct node
* @n:int valuein new node
* Return: pointer to struct node in case of sucess, or null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *tmp, *end;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);	
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = tmp;
	}
	return (*head);
}
