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

	va_start(list, n);
	if (*separator != '\0')
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(list, const unsigned int), separator);
		printf("%d\n", va_arg(list, const unsigned int));
		va_end(list);
	}
}
