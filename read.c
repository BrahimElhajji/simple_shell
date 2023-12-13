#include "shell.h"
/**
 * read_user_input - reads the commands
 * Return: success
 */

char *read_user_input(void)
{
	char *input_line = NULL;
	size_t buffer_size = 0;
	ssize_t characters_read;

	display_prompt();

	characters_read = getline(&input_line, &buffer_size, stdin);

	if (characters_read == -1)
	{
		free(input_line);
		return (NULL);
	}

	return (input_line);
}
