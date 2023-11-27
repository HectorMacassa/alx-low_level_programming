#include "main.h"
/**
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(file_d, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			perror("Fails");
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
