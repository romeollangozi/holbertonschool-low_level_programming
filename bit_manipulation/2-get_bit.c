#include <stdio.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be searched
 * @index: index of the bit we want
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (n == 0)
	{
		return (-1);
	}
	return (n & 1);
}
