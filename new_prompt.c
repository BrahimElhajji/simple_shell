#include "shell.h"

/**
 * display_prompt - functions that print prompt on my shell
 */

void display_prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "root$ ", 6);
		fflush(stdout);
	}
}
