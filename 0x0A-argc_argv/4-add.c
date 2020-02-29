#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int digit(char *n);
/**
 * main - print the name.
 * @argc: number of argument
 * @argv: string of input argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, suma = 0;

	for (i = 1; i <  argc; i++)
	{
		if (digit(argv[i]))
			suma = suma + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n",  suma);

	return (0);
}
/**
 * digit - check if a char is a digit.
 * @n: char input
 * Return: return 1 if char is digit and 0 if isnt
 */
int digit(char *n)
{

	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (isdigit(n[i]) == 0)
			return (0);
	}

	return (1);
}
