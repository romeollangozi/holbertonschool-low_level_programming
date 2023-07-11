#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_calloc - function that allocates memoro
 *@nmemb: amount of members
 *@size: byte size of the member
 *Return: null pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (int) nmemb; i++)
		*((char *)array + (i * sizeof(size))) = 0;
	return (array);
}
