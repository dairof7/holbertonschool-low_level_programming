#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * f_char -  function that prints a char.
 * @list: list of arguments passed to the function
 */
void f_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * f_int -  function that prints a integer.
* @list: list of arguments passed to the function
 */
void f_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * f_float -  function that prints float.
* @list: list of arguments passed to the function
 */
void f_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * fp_char -  function that prints a string.
* @list: list of arguments passed to the function
 */
void fp_char(va_list list)
{
	char *str = va_arg(list, char *);

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
	op_t ops[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", fp_char},
		{NULL, NULL}
		};
	va_list list;
	char *separator = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ops[j].op != NULL)
		{
			if (*(ops[j].op) == format[i])
			{
				printf("%s", separator);
				ops[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
