#include "shell.h"

/**
 * built_in - function that display the environement
 * @envp: parameter
 */

void built_in(char **envp)
{
	int i;

	if (envp == NULL)
	{
		return;
	}

	for (i = 0; envp[i] != NULL; i++)
	{
		print_fd(envp[i]);
		print_fd("\n");
	}
}
