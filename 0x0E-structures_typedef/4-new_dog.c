#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of dog
 * Return: dog_t a type of struct
 */


dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);

	}

	dog->age = age;
	return (dog);


}
