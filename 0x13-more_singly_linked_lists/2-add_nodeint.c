#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_nodeint - add  elemnets at head of  list
* @head: adress of  pointer to struct node
* @n:int value added to head of list
* Return: pointer to struct node in case of sucess, or null
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
