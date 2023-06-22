#include "main.h"
/**
 * more_numbers - prints numbers from 0 14,
 * 14 times
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 15)
	{
		while (j < 15)
		{
			if (j < 10)
			_putchar('0' + j);
			else
			{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			}
			j++;
		}
			_putchar('\n');
			j = 0;
			i++;
	}
}
