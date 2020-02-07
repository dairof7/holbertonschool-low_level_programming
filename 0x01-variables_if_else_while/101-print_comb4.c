#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
#include <stdio.h>
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = (i / 100);
		k = (i / 10) % 10;
		l = i % 10;
		if ((j < k) && (k < l))
		{
			putchar(j + 48);
			putchar(k + 48);
			putchar(l + 48);
			if ((j * 100 + k * 10 + l) < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
