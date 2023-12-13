#include "shell.h"
/**
 * khwi - frees the **
 * @massfoufa: array
 */
void khwi(char **massfoufa)
{
	char **nonperm;

	if (massfoufa == NULL)
		return;

	nonperm = massfoufa;


	while (*nonperm != NULL)
	{
		free(*nonperm);
		*nonperm = NULL;
		nonperm++;
	}

	free(massfoufa);
	massfoufa = NULL;
}
