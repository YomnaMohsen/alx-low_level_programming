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
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
