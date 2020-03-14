#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  function that prints all.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i = 0, j = 0;
va_list list;
char *separator = "";

va_start(list, format);
	op_t ops[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", fp_char},
		{NULL, NULL}
		};
		while (format[i])
		{
			j = 0;
			while (ops[j].op)
			{
				if (format[i] == ops[j].op[0])
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
	printf("\n");
	va_end(list);
}

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
	char *str;

	str = va_arg(list, char *);
	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}
