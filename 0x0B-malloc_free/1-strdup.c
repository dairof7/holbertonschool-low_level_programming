#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
/**
 * *_strdup - create array
 * @str: input array
 * Return: null in error
 */
char *_strdup(char *str)
{
	int i = 0, size;
	char *str_;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	str_ = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	if (size != 0)
	{
		while (i < size)
		{
			*(str_ + i) = *(str + i);
			i++;
		}
		*(str_ + 1) = '\0';
	}
	else
		return (0);
	return (str_);
}

/**
 * _strlen - returns the length of a string
 * @s: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
