#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_c - print a char
 * @c: char to print
 * Description: uses va_arg to print va_list char type;
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an int
 * @i: int to print
 * Description: uses va_arg to print va_list int type
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 * Description: uses va_arg to print va_list float type
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}


/**
 * print_s - prints a string
 * @s: string to print
 * Description: uses va_arg to print va_list string type
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 * Description: uses va_list of type format struct to print the input
 * In the struct t = type and f = especific format function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	op_t p[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].op != NULL)
		{
			if (*(p[j].op) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
