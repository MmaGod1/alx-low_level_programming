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
	int i, j, k, total_len = 0;
	char *grid;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
	}

	/* + ac for '\n', +1 for final '\0' */
	grid = malloc(sizeof(char) * (total_len + ac + 1));
	if (grid == NULL)
		return (NULL);

	/* Copy arguments into grid */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			grid[k++] = av[i][j];
		}
		grid[k++] = '\n';
	}
	grid[k] = '\0';

	return (grid);
}
