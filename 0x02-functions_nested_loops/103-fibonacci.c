#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int ant = 1, act = 2, buff = 0, cont;

	while (buff < 4000000)
	{
		buff = ant + act;
		ant = act;
		act = buff;
		if (buff % 2 == 0)
			cont = cont + buff;
	}
	printf("%ld\n", cont + 2);

	return (0);
}
