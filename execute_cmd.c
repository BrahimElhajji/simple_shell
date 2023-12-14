#include "shell.h"

/**
 * execute_command - function that execute the commands
 * @args: Argument Vector
 * @c: an integer
 * @envp: Environment Pointe
 * Return: Success
 */

int execute_command(char **args, int c, char **envp)

{
	pid_t babyP;
	int status;
	char *cmd;


	babyP = fork();

	if (babyP == -1)
	{
		perror("fork");
		return (EXIT_FAILURE);
	}

	if (babyP == 0)
	{

		cmd = ara_lcommand(args[0]);
		if (cmd)
			execve(cmd, args, envp);
		else
		{
			error(envp[0], c, args);
			khwi(args);
			exit(127);
		}
	} else
	{

		waitpid(babyP, &status, 0);
		khwi(args);
	}
	return (WEXITSTATUS(status));
}
