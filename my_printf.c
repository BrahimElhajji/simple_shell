#include "shell.h"

/**
 * print_f - new printf function
 * @s: a string
 */

void print_f(const char *s)
{
	write(STDOUT_FILENO, s, _strlen(s));
}
