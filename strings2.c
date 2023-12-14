#include "shell.h"
/**
 * _strncmp - funtion the compare strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 * Return: Success
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}
