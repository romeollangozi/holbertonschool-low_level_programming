#include "main.h"
/**
 * print_square - prints a swuare in the terminal
 * and the length is determined by the n argument
 * @n: length argument of the line being drawn
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
}
