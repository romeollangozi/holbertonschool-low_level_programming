#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the argumenst of th program
 * @ac: args count
 * @av: argument list
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	int sumlength = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sumlength += (int) strlen(av[i]);
	string = malloc(sumlength + ac + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]); j++)
		{
			string[n] = av[i][j];
			n++;
		}
		string[n] = '\n';
		n++;
	}
	return (string);
}
