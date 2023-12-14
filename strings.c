#include "shell.h"
/**
 * _strdup - implementation of strdup
 * @src: src parametre
 * Return: Success
 */
char *_strdup(char *src)
{
	char *string, *pointer;
	int i = 0;

	while (src[i])
		i++;
	string = malloc(i + 1);
	pointer = string;
	while (*src)
		*pointer++ = *src++;
	*pointer = '\0';
	return (string);
}
/**
 * _strcmp - implementation of strcmp
 * @s1: s1 parametre
 * @s2: s2 parametre
 * Return: Success
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/**
 * _strlen - implementation of strlen
 * @s: s parametre
 * Return: Success
 */
int _strlen(const char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
/**
 * _strcat - implementation of strcat
 * @dest: dest parametre
 * @src: src parametre
 * Return: Success
 */
char *_strcat(char *dest, char *src)
{
	int i, c, n;

	c = 0;
	n = 0;
	for (i = 0; dest[i] != '\0'; i++)
		c++;
	for (i = 0; src[i] != '\0'; i++)
		n++;
	for (i = 0; i <= n; i++)
		dest[c + i] = src[i];
	return (dest);
}
/**
 * _strcpy - implementation of strcpy
 * @dest: dest parametre
 * @src: src parametre
 * Return: Success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
