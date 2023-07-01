#include "main.h"

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
		n = n * -1;
	}

	while (n / divisor > 9)
		divisor = divisor * 10;

	while (divisor > 0)
	{
		if (divisor > n)
		{
			_putchar('0');
			divisor = divisor / 10;
		}
		else
		{
			_putchar('0' + n / divisor);
			n = n - (n / divisor) * divisor;
			divisor = divisor / 10;
		}
	}
}
