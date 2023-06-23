#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int f = 2;

	while (n > 1)
	{
		if (n % f == 0)
		{
			n = n / f;
		}
		else
			f = f + 1;
	}
	printf("%li", f);
	return (0);
}
