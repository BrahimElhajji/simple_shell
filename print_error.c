#include "shell.h"

/**
 * error - function that print the error if a command doesn't exist
 * @key: a pointer to a string
 * @chip: an integer
 * @argv:  an array of strings
 * Return: Success
 */


void error(char *key, int chip, char **argv)
{
	char *twichia;

	print_f(key);
	print_f(": ");
	twichia = me_itoa(chip);
	print_f(twichia);
	free(twichia);
	print_f(": ");
	print_f(argv[0]);
	print_f(": not found\n");
}

/**
 * me_itoa - function that turn a string to number
 * @n: an unsigned integer
 * Return: Success
 */

char *me_itoa(unsigned int n)
{
	char *khazzan = (char *)malloc(20 * sizeof(char));
	int wgef, bda, i = 0;

	if (n == 0)
		khazzan[i++] = '0';

	else
	{

		while (n != 0)
		{
			khazzan[i++] = (n % 10) + '0';
			n /= 10;
		}
	}

	khazzan[i] = '\0';

	bda = 0;
	wgef = i - 1;
	while (bda < wgef)
	{
		char temp = khazzan[bda];

		khazzan[bda++] = khazzan[wgef];
		khazzan[wgef--] = temp;
	}

	return (khazzan);
}
