/**
 * print_name -  Write a function that prints a name.
 * @name: struct
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
