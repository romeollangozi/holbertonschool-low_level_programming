#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of args
 *@argv: list of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int numBytes;
	int (*func)(int, char **) = main;
	unsigned char *opcode = (unsigned char *)func;
	int i = 0;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	if (numBytes <= 0)
	{
	printf("Error\n");
	exit(2);
	}
	numBytes = atoi(argv[1]);
	for (i = 0; i < numBytes; i++)
		printf("%02x ", opcode[i]);
	printf("\n");
	return (0);
}
