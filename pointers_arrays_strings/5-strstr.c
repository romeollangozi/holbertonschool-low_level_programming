#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int found = 0;

	for (; i < (int) strlen(needle); i++)
	{
		for (; j < (int) strlen(haystack); j++)
		{
			if (needle[i] == haystack[j])
				{	found = 1;
					j = j + 1;
					break;
				}
			else
				found = 0;
		}
		if (!found)
			i = 0;
	}
	if (found)
		return (&haystack[j - i]);
	else
		return (NULL);

}
