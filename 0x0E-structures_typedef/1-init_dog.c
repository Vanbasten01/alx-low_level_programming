#include "dog.h"
#include <stdio.h>
/**
 *init_dog - initializes a variable of type struct dog.
 *@d: a pointer to the variable to be initialized.
 *@name:name of the dog.
 *@age:age of the dog.
 *@owner:owner og the dog.
 *Return: void.
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
