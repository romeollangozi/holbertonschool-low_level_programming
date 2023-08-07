#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of argumenst supplied to argv
 * @argv: vectorial array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fdr, fdw;
	char buffer[1024 * 8];
	int n, m;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdr = open(argv[1], O_RDONLY);
	fdw = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fdr == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		n = read(fdr, buffer, 1024 * 8);
		m = write(fdw, buffer, n);
		if (m == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (n == 1024 * 8);
	close(fdr);
	close(fdw);
	return (0);
}
