#include <stdio.h>
/**
 * main - fizzbuzz program
 * Return: Always 0.
 *
 */

int main(void)
{
	int j;

		for (j = 1; j <= 100; j++)
		{
			if ((j % 3 == 0) && (j % 5 == 0))
				printf("FizzBuzz");
			else if (j % 3 == 0)
				printf("Fizz");
			else if (j % 5 == 0)
				printf("Buzz");
			else
				printf("%d", j);
			if (j < 100)
				printf(" ");
			else
				printf("\n");
		}

	return (0);
}
