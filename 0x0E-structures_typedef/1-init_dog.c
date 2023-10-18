#include "dog.h"
#include <stdlib.h>
/**
*init_dog - initializes struct dog
*@d: pointer to struct dog
*@name: dog name
*@age: age of dog
*@owner: owner name
*Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
