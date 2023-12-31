#include "main.h"
#include <string.h>
/**
 *cap_string - function that capitalizes all words of a string
 * of a string to uppercase
 *@s: pointer to string literal
 *Return: the string in uppercase
*/
char *cap_string(char *s)
{
	int length = strlen(s);
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for (i = 1; i < length; i++)
	{
		if ((s[i] == ',' || s[i] == ' ' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' ||
		s[i] == '{' || s[i] == '}' || s[i] == '\t' ||
		s[i] == '\n') && s[i + 1] >= 97 && s[i + 1] <= 122)
	{
		s[i + 1] = s[i + 1] - 32;
	}
	}
	return (s);
}
