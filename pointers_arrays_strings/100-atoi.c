#include "main.h"
#include <string.h>
/**
 *_atoi - function that convert a string to an integer
 *@s: source of the string we want to copy
 *Return: the number
 */
int _atoi(char *s)
{
	unsigned int length = strlen(s);
	char num[4];
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int sign = 1;
	unsigned int pow = 1;
	unsigned int number = 0;
	unsigned int num_length;

	while (i <= length)
	{	
		if(s[i] == '-')
			sign = sign * -1;	
		
		if(s[i] >= 48 && s[i] <= 57)
		{	
			num[j] = s[i];
			j++;
			if(s[i + 1] < 48 && s[i + 1] > 57)
				break;
		}
		i++;
	}	
		
		num_length = strlen(num);
		while (num_length > 1)
		{
			pow = pow * 10;
			num_length--;
		}
		num_length = strlen(num);
		while (k < num_length)
		{
			number = number + (num[k] - 48) * pow;
			pow = pow / 10;
			k++;
		}
	
		number = number * sign;
	
	return number;
}
