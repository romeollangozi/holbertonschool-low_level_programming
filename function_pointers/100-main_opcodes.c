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
	unsigned char *opcode = (unsigned char *)main;
	int i = 0;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	numBytes = atoi(argv[1]);
	if (numBytes <= 0)
	{
	printf("Error\n");
	exit(2);
	}
	for (i = 0; i < numBytes; i++)
	{	
		if (i != 0)
			printf(" ");
		printf("%02x", opcode[i]);
	}
	printf("\n");
	return (0);
}
