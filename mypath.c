#include "shell.h"

/**
 * ara_lcommand - getting the path
 * @amr: amr command parametre
 * Return: success
 */
char *ara_lcommand(char *amr)
{
	char *directory, *whole_command, *env_path = _getenv("PATH");

	int i = 0;

	while (amr[i])
	{
		if (amr[i] == '/')
		{
			if (access(amr, F_OK) == 0)
				return (_strdup(amr));

			return (NULL);
		}
		i++;
	}

	if (env_path == NULL)
		return (NULL);

	directory = strtok(env_path, ":");
	while (directory)
	{
		whole_command = malloc(_strlen(directory) + _strlen(amr) + 2);
		_strcpy(whole_command, directory);
		_strcat(whole_command, "/");
		_strcat(whole_command, amr);
		if (access(whole_command, F_OK) == 0)
			return (whole_command);
		free(whole_command);
		directory = strtok(NULL, ":");
	}
	return (NULL);
}
