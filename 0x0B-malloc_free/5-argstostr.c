#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: # of arg
 * @av: string of arguments
 *
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 0;
	char *str_;

	if ((ac == 0) || (av == NULL))
	{
		return (0);
	}
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	str_ = malloc(size * sizeof(char) + ac + 1);
	if (str_ == NULL)
	{
		free(str_);
		return (0);
	}
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			str_[k] = av[i][j];
		}
			str_[k] = '\n';
		k++;
	}
	str_[k] = '\0';
	return (str_);
}
