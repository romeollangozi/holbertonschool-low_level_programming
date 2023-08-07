#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - function that creates a text file
 * @filename: name of the file
 * @text_content: text content
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = strlen(text_content);
	int n;
	char *empty = "";
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		n = write(fd, empty, 0);
	}
	n = write(fd, text_content, length);
	if (n == -1)
		return (-1);
	
	return (1);
}
