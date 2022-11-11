#include "simishell.h"

/**
 * lister - a function which executes the /bin/ls program to list files
 * @line: an array of command and arguments
 *
 * Return: return 1 on success, -1 if fails
 */
int lister(char *line[])
{
	int status;
	pid_t waiter, child;

	child = fork();
	if (child == -1)
	{
		perror("Forking");
	}
	if (child == 0)
	{
		execve("/bin/ls", line, NULL);
	}
	else
	{
		waiter = wait(&status);
		if (waiter == -1)
		{
			perror("waiting");
		}
	}
	free(line);
	return (1);
}

/**
 * cater - a function which executes the /bin/cat program to show text files
 * @line: an array of command and arguments
 *
 * Return: 1 on success, -1 if fails
 */
int cater(char *line[])
{
	int status;
	pid_t waiter, child;

	child = fork();
	if (child == -1)
	{
		perror("Forking");
	}
	if (child == 0)
	{
		execve("/bin/cat", line, NULL);
	}
	else
	{
		waiter = wait(&status);
		if (waiter == -1)
		{
			perror("Waiting");
		}
	}
	free(line);
	return (1);
}
/**
 * builtincom - a function to execute when unlisted comman entered
 * @line: is a pointer to pointer of characters
 *
 * Return: return an integer
 */
int builtincom(char **line)
{
	int status;
	pid_t waiter, child;

	child = fork();
	if (child == -1)
	{
		perror("Forking");
	}
	if (child == 0)
	{
		execve(line[0], line, NULL);
		if (errno != 0)
		{
			return (errno);
		}
	}
	else
	{
		waiter = wait(&status);
		if (waiter == -1)
		{
			perror("waiting");
		}
	}
	free(line);
	return (0);
}
/**
 * pwder - a function which prints the current path
 * @line: an array of command and arguments
 *
 * Return: 1 on success and -1 if it fails
 */
int pwder(char *line[])
{
	int status;
	pid_t waiter, child;

	child = fork();
	if (child == -1)
		perror("Forking");
	if (child == 0)
	{
		execve("/bin/pwd", line, NULL);
	}
	else
	{
		waiter = wait(&status);
		if (waiter == -1)
			perror("Waiting");
	}
	free(line);
	return (1);
}
/**
 * echorr - a function which echo back any text
 * @line: an array of command and arguments
 *
 * Return: 1 on success and -1 if it fails
 */
int echorr(char *line[])
{
	int status;
	pid_t waiter, child;

	child = fork();
	if (child == -1)
	{
		perror("Forking");
	}
	if (child == 0)
	{
		execve("/bin/echo", line, NULL);
	}
	else
	{
		waiter = wait(&status);
		if (waiter == -1)
		{
			perror("Waiting");
		}
	}
	free(line);
	return (1);
}
