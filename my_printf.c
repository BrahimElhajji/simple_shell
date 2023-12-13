#include "shell.h"

/**
 * print_f - new printf function
 */

void print_f(const char *s)
{
	write(STDOUT_FILENO, s, _strlen(s));
}
