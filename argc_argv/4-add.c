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
	int sum = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
		return (-1);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'a' || *argv[i] <= 'z'
			|| *argv[i] >= 'A' || *argv[i] <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
