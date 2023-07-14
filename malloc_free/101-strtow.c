#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - function that splits a string into word
 * @str: string to be splited
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **array;
	int i;
	int k = 0, j = 0;
	int wNum = 0;

	if (str == NULL || !(strcmp(str, "")) || !(strcmp(str, " ")))
		return (NULL);
	for (i = 0; i < (int) strlen(str); i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || i + 1 == (int) strlen(str)))
			wNum++;
	array = malloc(sizeof(char *) * (wNum + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= wNum; i++)
		array[i] = malloc(50);
	for (; i >= 0; i--)
	{
		if (array[i] == NULL)
			free(array[i]);
	}
	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			array[j][k] = str[i];
			k++;
			if (str[i + 1] == ' ' || (i + 1) == (int) strlen(str))
			{
				array[j][k] = '\0';
				j++;
				k = 0;
			}
		}
	}
	array[j] = NULL;
	return (array);
}
