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
#define MAX_TOKENS 128
#define DELIMITER " \t\r\n\a"
extern char **environ;
#define MAX_ARGS 1024

char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _strncmp( const char * s1, const char * s2, size_t n );
char * read_user_input();
void display_prompt();
char ** tokenize_string(char *input_line);
int execute_command(char **args, char **envp, int i);
void freearray2D(char **arr);

char *_getenv(const char *env_var);
void printing_error(char *nm, char *command, int i);
char *get_command(char *command);
char *my_itoa(int n);
void rev_string(char *s, int len);



#endif

