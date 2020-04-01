#include "holberton.h"
/**
 *create_file - function that creates a file
 *@filename: name of the file to be created
 *@text_content: text content of the new file
 *
 *Return: returns 1 (succes) or -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, txt_len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + txt_len))
		{
			txt_len++;
		}
	}
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
		text_content = "";

	if (file_d == -1)
		return (-1);

	write(file_d, text_content, txt_len);
	close(file_d);

	return (1);

}
