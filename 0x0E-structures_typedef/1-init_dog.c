#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable  of type struct dog
 * @d: pointer to variable
 * @name: pointer to string value
 * @age: param age
 * @owner: pointer to string value
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		exit (1);

	d->name = name;
	d->age = age;
	d->owner = owner;

}
