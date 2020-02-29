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
	int cont = 0;
	unsigned int cents;

	if (argc == 2)
	{
		if (digit(argv[1]))
			cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents % 25 == 0)
			{
				cents = cents - 25;
				cont++;
			}
			else if (cents % 10 == 0)
			{
				cents = cents - 10;
				cont++;
			}
			else if (cents % 5 == 0)
			{
				cents = cents - 5;
				cont++;
			}
			else if (cents % 2 == 0)
			{
				cents = cents - 2;
				cont++;
			}
			else if (cents % 1 == 0)
			{
				cents = cents - 1;
				cont++;
			}
		}
		printf("%d\n",  cont);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

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
