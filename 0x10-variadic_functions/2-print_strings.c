#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator: string separator
 * @n: argument string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(list, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
}
