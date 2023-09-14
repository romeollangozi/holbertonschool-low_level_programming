#include "search_algos.h"
#include <stdio.h>
/**
 * print_array - function that prints the array
 * @start: start of the array
 * @array: array
 * @size: size
 */
void print_array(int *array, int start,  size_t size)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < (int) size; i++)
	{
		printf("%i", array[i]);
		if (i != (int) size - 1)
			printf(", ");
	}
	printf("\n");
}
/**
 *h_binary_search - binary search
 *@array: array
 *@start: start
 *@end: end
 *@value: value
 *Return: index of the value
 */
int h_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t middle;

	if (end >= start)
	{
		middle = start + (end - start) / 2;
		print_array(array, start, end + 1);
		if (array[middle] == value)
			return (middle);
		if (value > array[middle])
		{
			return (h_binary_search(array, middle + 1, end, value));
		}
		return (h_binary_search(array, start, middle - 1, value));
	}
	return (-1);
}
/**
 *binary_search - binary search
 *@array: array
 *@size: size
 *@value: value
 *Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (h_binary_search(array, 0, size - 1, value));
}
