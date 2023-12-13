#include "shell.h"

/**
 * _getenv - function the get the path
 * @targ_var: target variable
 * Return: Success
 */

char *_getenv(const char *targ_var)
{
	char **env;
	size_t var_len;

	if (targ_var == NULL || environ == NULL)
		return (NULL);

	var_len = _strlen(targ_var);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, targ_var, var_len) == 0 && (*env)[var_len] == '=')

			return (*env + var_len + 1);
	}
	return (NULL);
}
