#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, ant = 1, act = 2, buff;

	printf("1, 2, ");
	for (i = 2; i <= 49; i++)
	{
		buff = ant + act;
		ant = act;
		act = buff;
		if (i != 49)
			printf("%ld, ", buff);
		else
			printf("%ld\n", buff);

	}

	return (0);
}
