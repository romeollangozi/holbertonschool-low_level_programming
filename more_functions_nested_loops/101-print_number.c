#include "main.h"
/**
 * print_number - prints the number given
 * @n: the number given
 */
void print_number(int n)
{
	int l = 1;
	int t = n;

	if (n < 0)
	{
		_putchar('-');
		t = t * -1;
		n = n * -1;
	}
	while (t > 9)
	{
		t = t / 10;
		l = l * 10;
	}
	while (l > 0)
	{
		_putchar('0' + (n / l) % 10);
		l = l / 10;
	}
}
