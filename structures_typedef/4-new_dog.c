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
	char *Cname = strdup(name);
	char *Cowner = strdup(owner);
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL || Cowner == NULL || Cname == NULL)
	{
		free(Cowner);
		free(Cname);
		free(newdog);
		return (NULL);
	}

	newdog->name = Cname;
	newdog->owner = Cowner;
	newdog->age = age;
	return (newdog);
}
