#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int primo = 2, res = 0, d, ne = 612852475143;

		while (ne >= primo)
		{
			for (d = 2; d < primo; ++d)
			{
				if (primo % d == 0)
					break;
			}
			if (d == primo)
				while (ne % primo == 0)
				{
					if (ne != primo)
					{
						printf("%ld, ", primo);
						res = ne / primo;
						ne = res;
					}
			else
			{
				printf("%ld\n", primo);
				break;
			}
		}
		primo++;
	}

	return (0);
}
