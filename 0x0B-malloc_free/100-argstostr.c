#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument counter
 * @av: pointers to arhument array
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, len = 0, k;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		/* for '\n' */
	}
	len++;
	/* for '\0' */

	args = malloc(sizeof(char) * len);
	if (args == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			args[k] = av[i][j];
			k++;
			j++;
		}
	args[k] = '\n';
	k++;
	}
	args[k] = '\0';

	return (args);
}
