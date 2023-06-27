#include "main.h"
#include <string.h>
/**
 *_strncmp -  function that copies a string
 *@s1: first string to be compared
 *@s2: string to be compared with s1
 *Return: returns an integer indicating the result of the
 *comparison
*/
int _strcmp(char *s1, char *s2)
{	
	int i;

	if (strlen(s1) > strlen(s2))
		return (15);
	else if (strlen(s2) > strlen(s1))
		return (-15);
	else
	{
		for(i = 0; i < (int) strlen(s1); i++)
		{
			if (s1[i] != s2[i])
				return (-1);

		}
			return (0);
	}

}
