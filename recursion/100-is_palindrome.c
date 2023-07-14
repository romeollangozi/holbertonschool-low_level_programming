#include <stdio.h>
#include <string.h>
/**
 * isPalRec - recursive function to find if a string is palindrome or not
 * @str: string to be verified
 * @s: starting point
 * @e: ending point
 * Return: 1 if it is 0 if not
 */

int isPalRec(char *str, int s, int e)
{
	if (s == e)
		return (1);
	if (*(str + s) != *(str + e))
		return (0);
	if (s < e + 1)
	{
		return (isPalRec(str, s + 1, e - 1));
	}

		return (1);
}
/**
 *is_palindrome - checks if a string is palindrome or not
 *@s: string to be checked
 *Return: 1 if it is 0 if not
 */

int is_palindrome(char *s)
{
	int n = strlen(s) - 1;

	return (isPalRec(s, 0, n));
}
