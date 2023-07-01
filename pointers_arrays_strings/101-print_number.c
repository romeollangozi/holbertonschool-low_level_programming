#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints an integer
 *@n: integer
 */

void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
	}

	while (abs(n / divisor) > 9)
		divisor = divisor * 10;

	while (divisor > 0)
	{
		if (divisor > abs(n))
		{
			_putchar('0');
			divisor = divisor / 10;
		}
		else
		{
			_putchar('0' + abs(n / divisor));
			n = n - (n / divisor) * divisor;
			divisor = divisor / 10;
		}
	}
}
