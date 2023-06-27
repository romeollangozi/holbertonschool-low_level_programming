#include "main.h"
#include <string.h>
/**
 *leet -  function that encodes a string into 1337
 *@s: pointer to string literal
 *Return: the string in 1337
*/
char *leet(char *s)
{
	int length = strlen(s);
	int i;
	int j;
	char *letters = "AaEeOoTtLl";
	char *numbers = "4433007711";

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < (int) strlen(letters); j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}
	}
	return (s);
}

