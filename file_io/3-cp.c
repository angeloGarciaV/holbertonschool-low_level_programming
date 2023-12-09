#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * copy_file - Function that copies the content of a file to another file
 * @file_from: Name of the file to copy from
 * @file_to: Name of the file to copy to
 * Return: 1 on success, -1 on failure
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, readed, written;
	char *buffer;

	if (file_from == NULL || file_to == NULL)
	{
		return (-1);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		return (-1);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		return (-1);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (-1);
	}

	readed = read(fd_from, buffer, 1024);
	if (readed == -1)
	{
		return (-1);
	}

	while (readed != 0)
	{
		written = write(fd_to, buffer, readed);
		if (written == -1)
		{
			return (-1);
		}
		readed = read(fd_from, buffer, 1024);
		if (readed == -1)
		{
			return (-1);
		}
	}

	free(buffer);
	close(fd_from);
	close(fd_to);
	return (1);
}
