#include "dog.h"
#include <stdlib.h>
/**
*s_len - find string length
*@s: pointer to string
*Return: pointer to string
*/
int s_len(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
*m_cpy - copy string from src to dest
*@s: pointer to string
*@d: pointer to dest
*Return: pointer to string
*/
char *m_cpy(char *d, char *s)
{
	while (*s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (d);
}

/**
*new_dog - creates new dog
*@name: name stirng struct dog
*@age: age in struct dog
*@owner: owner string in struct dog
*Return: pointer to struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);
	t->name = malloc(sizeof(char) * (s_len(name) + 1));
	if (t->name == NULL)
	{
		free(t);
		return (NULL);
	}
	t->owner = malloc(sizeof(char) * (s_len(owner) + 1));
	if (t->owner == NULL)
	{
		free(t);
		return (NULL);
	}
	t->name = m_cpy(t->name, name);
	t->owner = m_cpy(t->owner, owner);
	t->age = age;

	return (t);

}
