#include "dog.h"
#include <stdlib.h>
/**
free_dog - prints struct dog
*@d: pointer to struct dog
*Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
