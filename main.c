#include "shell.h"
/**
 * main - entry point
 * @argc: argc parametre
 * @argv: argv paramtre
 * @envp: envp paramtre
 * Return: Success
 */

int main(int argc, char **argv, char **envp)
{
	char *user_input, **command = NULL;
	int status = 0, c = 1;
	(void)argc;
	(void)argv;

	while (1)
	{
		user_input = read_user_input();

		if (user_input != NULL)
		{
			command = tokenize_string(user_input);
			if (!command)
				continue;
			if (_strcmp(command[0], "exit") == 0)
			{
				khwi(command);
				free(user_input);
				exit(status);
			}
			else if (_strcmp(command[0], "env") == 0)
			{	khwi(command);
				free(user_input);
				built_in(envp);
			} else
			{
				free(user_input);
				status = execute_command(command, c, envp);
			}
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
