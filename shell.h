#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#define DELIMITER " \t\r\n\a"
extern char **environ;

int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
char *_strdup(char *src);
int _strncmp(const char *s1, const char *s2, size_t n);

char *read_user_input(void);
void display_prompt(void);
char **tokenize_string(char *input_line);
int execute_command(char **args, int c, char **envp);
void khwi(char **massfoufa);
char *_getenv(const char *env_var);
char *ara_lcommand(char *amr);
char *me_itoa(unsigned int n);
void error(char *key, int chip, char **argv);
void print_f(const char *s);
void built_in(char **envp);

#endif
