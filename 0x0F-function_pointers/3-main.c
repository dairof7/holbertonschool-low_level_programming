#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main -  program that performs simple operations.
 * @ac: # arguments
 * @av: array of arguments
 * Return: result of operation
 */

int main(int ac, char **av)
{
	int (*p)(int, int);
	int res;

	ac = ac;
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*av[2] == '/' || *av[2] == '%') && *av[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(av[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = p(atoi(av[1]), atoi(av[3]));
	printf("%d\n", res);
	return (0);
}
