#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: string separator
 * @n: argument number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int number;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(list, int);
		printf("%d", number);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
