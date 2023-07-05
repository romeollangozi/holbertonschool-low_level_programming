#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: number of argumenst supplied to argv
 * @argv: vectorial array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int money = atoi(argv[1]);
	int sum = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
		printf("Error\n");
	while (money > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (money / coins[i] > 0)
			{
				sum += money / coins[i];
				money = money % coins[i];
				continue;
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
