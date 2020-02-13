#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{

	long int i, suma_a, suma_b;
	long int n1a = 0, n1b = 1, n2a = 0, n2b = 2, carry;

	printf("1, 2, ");
	for (i = 2; i <= 97; i++)
	{
		suma_b = n1b + n2b;
		if ((suma_b / 10000000000) > (n2b / 10000000000))
		{
			carry = suma_b / 10000000000;
			suma_b = (n1b + n2b) - carry * 10000000000;
		}
		else
			carry = 0;
		suma_a = (n1a + n2a) + carry;
		n1a = n2a;
		n1b = n2b;
		n2a = suma_a;
		n2b = suma_b;
		if (i != 97)
		{
			if ((suma_b / 1000000000 == 0) && (suma_a != 0))
				printf("%ld0%ld, ", suma_a, suma_b);
			else if ((suma_b / 1000000000 != 0) && (suma_a != 0))
				printf("%ld%ld, ", suma_a, suma_b);
			else if (suma_a == 0)
				printf("%ld, ", suma_b);
		}
		else
		{
			if ((suma_b / 1000000000 == 0) && (suma_a != 0))
				printf("%ld0%ld\n", suma_a, suma_b);
			else if ((suma_b / 1000000000 != 0) && (suma_a != 0))
				printf("%ld%ld\n", suma_a, suma_b);
		}
	}

	return (0);
}
