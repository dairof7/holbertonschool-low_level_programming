#include <stdio.h>
/**
 * main - print the name.
 * @argc: number of argument
 * @argv: string of input argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
		argv[0] = argv[0];
		printf("%d\n",  argc - 1);

return (0);
}
