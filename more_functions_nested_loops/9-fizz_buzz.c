#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0 && i < 100)
		{
			printf("Buzz ");
			continue;
		}
		if (i == 100)
		{
			printf("Buzz");
			continue;
		}
		printf("%d ", i);


}

	printf("\n");
	return (0);
}
