#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-fuction that read a text file and print it out the POSIX std
 * out
 * @filename :text file being read
 * @letters :Number of letters to read
 *
 * Return :w-actual number of bytes read and printed
 *         0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
