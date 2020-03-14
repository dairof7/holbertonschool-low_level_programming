#ifndef VARIADIC_FUNTIONS
#define VARIADIC_FUNTIONS
#include <stdarg.h> 
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct op
{
	char *op;
	void (*f)();
} op_t;
void f_char(va_list);
void f_int(va_list);
void f_float(va_list);
void fp_char(va_list);
#endif