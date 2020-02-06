#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49 + k; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
				if (!((i == 56) && (j == 57)))
				{
					putchar(',');
					putchar(' ');
				}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
