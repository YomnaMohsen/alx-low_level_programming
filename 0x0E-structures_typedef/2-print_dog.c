#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints struct dog
*@d: pointer to struct dog
*Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("age: %f\n", d->age);
	if (d->owner)
		printf("owner: %s\n", d->owner);
	else
		printf("owner: (nil)\n");
}
