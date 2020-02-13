#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int numero = 612852475143, i = 2;

	while (i <= numero)
	{
		if ((numero % i) == 0)
		{
			if (numero != i)
			{
				numero = numero / i;
			}
			else
			{
				printf("%ld\n", i);
			}
		}
		i++;
	}

	return (0);
}
