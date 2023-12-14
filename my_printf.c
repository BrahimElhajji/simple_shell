#include "shell.h"

/**
 * print_f - new printf function
 * @s: a string
 */

void print_f(const char *s)
{
	write(STDERR_FILENO, s, _strlen(s));
}

/**
 * print_fd - new printf function
 * @s: a string
 */
void print_fd(const char *s)
{
	write(STDOUT_FILENO, s, _strlen(s));
}
