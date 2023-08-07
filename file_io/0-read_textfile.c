#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file
 * @letters: number of letters to copy
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int f1;
	ssize_t n;
	ssize_t c;

	buffer = malloc(letters);
	if (filename == NULL)
		return (0);

	f1 = open(filename, O_RDONLY);
	n = read(f1, buffer, letters);
	c = write(1, buffer, n);
	if (c == -1 || c != n)
		return (0);

	return (n);
}
