#include "shell.h"
/**
 * main - entry point
 * @argc: argc parametre
 * @argv: argv paramtre
 * Return: Success
 */

int main(int argc, char **argv)
{
	char *user_input, **command = NULL;

	int status = 0, c = 0;
	(void)argc;


	while (1)
	{
		user_input = read_user_input();


		if (user_input != NULL)
		{

			command = tokenize_string(user_input);
			if (!command)
				continue;

			free(user_input);
			status = execute_command(command, c, argv);

		} else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		c++;

	}
	return (0);
}
