#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: n bytes of second string
 *Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	char *new;
	int i = 0, j = 0;

	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int) strlen(s2))
		len = strlen(s1) + strlen(s2) + 1;
	else
		len = (unsigned int) strlen(s1) + (unsigned int) n + 1;

	new = malloc(len);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < (int) strlen(s1); i++)
		new[i] = s1[i];

	for (; i < len; i++)
	{
		new[i] = s2[j];
		j++;
	}

	return (new);
}
