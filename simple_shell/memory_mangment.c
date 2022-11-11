#include "shell.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer
 * @old_size: Previous size of the pointer
 * @new_size: New size of the pointer
 *
 * Return: void pointweer Reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (newe_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (Null);
	if (ptr == NULL)
	{
		fill_an_array(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_size);
		free(ptr);
	}
	return (result);
}
/**
 * free_all - Free array of Char pointer and Char pointer
 * @cmd: Array Pointer
 * @line: Char pointer
 *
 * Return: void
 */
void free_all(char **cmd, char *line)
{
	free(cmd);
	free(line);
	cmd = NULL;
	line = NULL;
}
/**
 * _memcpy - Copy Byte from source to destination
 * @dest: Destination Pointer
 * @src: Source Pointer
 * @n: Size (How much to copy)
 *
 * Return: Void Pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * fill_an_array - Fill an array by constant Byte
 * @a: Void Pointer
 * el: Int
 * @len: Length of int
 *
 * Return: Void Pointer
 */
void *fill_an_array(void *a, int el, unsigned int len)
{
	char *p = a;
	unsigned int i = 0;

	while (i < len)
	{
		*p = el;
		p++;
		i++;
	}
	return (a);
}
/**
 * _calloc - Allocates Memory for an array, using Malloc
 * @size: Size
 *
 * Return: Void Pointer
 */
void *_calloc(unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
