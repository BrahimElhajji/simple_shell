#include "shell.h"
/**
 * tokenize_string - tokenizing the splited string
 * @input_line: input_line paramtre
 * Return: Success
 */
char **tokenize_string(char *input_line)
{
	char *token = NULL, **tokens_array = NULL;
	int count_tokens = 0, index = 0;
	char *line_copy, *line_copy2;

	if (!input_line)
		return (NULL);

	line_copy = _strdup(input_line);
	token = strtok(line_copy, DELIMITER);
	if (token == NULL)
	{
		free(input_line);
		free(line_copy);
		return (NULL);
	}
	while (token)
	{
		count_tokens++;
		token = strtok(NULL, DELIMITER);
	}

	free(line_copy);
	tokens_array = malloc(sizeof(char *) * (count_tokens + 1));
	if (!tokens_array)
	{
		free(input_line);
		return (NULL);
	}
	line_copy2 = _strdup(input_line);
	token = strtok(line_copy2, DELIMITER);
	while (token)
	{
		tokens_array[index] = _strdup(token);
		token = strtok(NULL, DELIMITER);
		index++;
	}
	tokens_array[index] = NULL;
	free(line_copy2);
	return (tokens_array);
}
