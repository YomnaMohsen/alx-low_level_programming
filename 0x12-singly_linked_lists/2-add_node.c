#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - prints all elemnets in list
* @head: adress of  pointer to struct node
* @s: pointer to string
* Return: pointer to struct node in case of sucess, or null
*/
list_t *add_node(list_t **head, const char *s)
{
	list_t *tmp;
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
/*	for (len = 0; s_d[len] != '\0';)*/
	while (*s)
	{
		s++;
		len++;

	}
	tmp->len = len;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
