#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - add elemnets at end of linked list
* @head: adress of  pointer to struct node
* @s: pointer to string
* Return: pointer to struct node in case of sucess, or null
*/
list_t *add_node_end(list_t **head, const char *s)
{
	list_t *tmp, *end;
	int len = 0;
	char *s_d;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	s_d = strdup(s);
	if (s_d == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->str = s_d;
	while (*s)
	{
		s++;
		len++;

	}
	tmp->len = len;
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
