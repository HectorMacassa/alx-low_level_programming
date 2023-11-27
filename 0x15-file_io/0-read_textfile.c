#include "main.h"
/**
 * read_textfile - This reads a text file and prints it to the POSIX stdoutput
 * @filename: Name of file to be read
 * @letters: Number of letters it should read and print
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	lenr = read(file_d, buffer, letters);
	if (lenr == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	if (lenw == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	close(file_d);
	return (lenr);
}
