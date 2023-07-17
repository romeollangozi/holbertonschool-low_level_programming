#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 *new_dog - creates a new dog instance
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new dog object instance
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	newdog->name = malloc(strlen(name));
	newdog->owner = malloc(strlen(owner));

	if (newdog->name == NULL || newdog->owner == NULL || newdog == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		newdog = NULL;
		return (NULL);
	}
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
