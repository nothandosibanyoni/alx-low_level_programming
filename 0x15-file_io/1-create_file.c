#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int q;
	int i;
	int a;

	if (!filename)
		return (-1);

	q = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (q == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	a = write(q, text_content, i);

	if (a == -1)
		return (-1);

	close(q);

	return (1);
}
