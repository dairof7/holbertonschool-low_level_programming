#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - create array
 * @str: input array
 * Return: null in error
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *str_;

	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	size++;
	str_ = malloc(sizeof(char) * size);
	if (str_ == NULL)
		return (NULL);
	while (i < size)
	{
		*(str_ + i) = *(str + i);
		i++;
	}
	return (str_);
}
