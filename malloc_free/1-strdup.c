#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - copys a given string and duplicates it
 *@str: string to be duoplicated
 *Return: pointer to the string duplicated
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *new = malloc(len);
	int i = 0;

	if (str == NULL || new == NULL || *str == 0)
	{
		return (NULL);
	}

	while (i <= (int)len)
	{
		new[i] = str[i];
		i++;
	}

	return (new);
}
