#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * _pow - function that returns a number to power n
 *@base: the base of the number
 *@power: power 
 *Return: number to the power n
 */

unsigned int _pow(unsigned int base, unsigned power)
{
	if (power == 0)
		return (1);
	else
		return (base * (_pow(base, power - 1)));
}

/**
 *binary_to_int - function that converts a binary to an unsigned int
 *@b: binary
 *Return: the converted number or 0 if there is one or more chars in the\
 *string b that is not 0 or 1 and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;
	int length = strlen(b) -1;
	
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		
		if (b[i] == '1')
		{
			decimal += _pow(2, length);
		}
		length--;
		i++;
	}
	return (decimal);
}
