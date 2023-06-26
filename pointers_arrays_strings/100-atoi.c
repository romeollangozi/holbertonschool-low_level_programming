#include "main.h"
#include <string.h>
/**
 *_atoi - function that convert a string to an integer
 *@s: source of the string we want to copy
 *Return: the number
 */
int _atoi(char *s)
{
	int start, end, i;
	int startFound = 1;
	int sign = 1;
	int length = strlen(s);
	int number = 0;

	for (i = 0; i < length; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (startFound)
			{
				start = i;
				startFound = 0;
			}
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				end = i;
				break;
			}
		}
	}
	for (i = start; i <= end; i++)
	{
		number = number * 10 + (s[i] - '0');

	}
	number = number * sign;
	return (number);
}
