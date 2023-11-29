#include "main.h"

/**
 * read_textfile - function reads  and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int q;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	q = open(filename, O_RDONLY);

	if (q == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(q, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(q);

	free(buf);

	return (nwr);
}
