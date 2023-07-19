#include <stdio.h>
#include <stdlib.h>
/**
 *printOpcode - prints opcode of the program
 *@numBytes: number of opcodes to print
 */
void printOpcode(int numBytes)
{
	void (*func)() = printOpcode;
	unsigned char *opcode = (unsigned char *)func;
	int i = 0;

	for (i = 0; i < numBytes; i++)
	{
	printf("%02x ", opcode[i]);
	}
	printf("\n");
}
/**
 *main - entry point
 *@argc: number of args
 *@argv: list of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int numBytes = atoi(argv[1]);

	if (argc < 2)
	{
	printf("Usage: ./program_name <num_bytes>\n");
	return (1);
	}
	if (numBytes <= 0)
	{
	printf("Invalid number of bytes: %s\n", argv[1]);
	return (1);
	}

	printOpcode(numBytes);
	return (0);
}
