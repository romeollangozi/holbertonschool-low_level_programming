#include <stdio.h>
/**
 * is_prime - finds if the number is a prime or not
 * @n: length argument of the line being drawn
 * Return: returns 1 if its a prime number
 * returns 0 if not
 */
int is_prime(long int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);

	}
		return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a;
	long int largest = 0;
	int i;
	long int n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			if (is_prime(i))
			{
				a = i;
				if (a > largest)
				largest = a;
			}
		}
	}
	printf("%li\n", largest);
	return (0);
}
