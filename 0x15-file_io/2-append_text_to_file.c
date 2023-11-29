#include "main.h"

/**
 * append_text_to_file - appends text at finish of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q;
	int i;
	int a;

	if (!filename)
		return (-1);

	q = open(filename, O_WRONLY | O_APPEND);

	if (q == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		a = write(q, text_content, i);

		if (a == -1)
			return (-1);
	}

	close(q);

	return (1);
}
