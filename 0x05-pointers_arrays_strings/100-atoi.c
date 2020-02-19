#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - reverses a string
 * @s: array in
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
int i = 0, signo = 1, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			signo = signo * -1;
		else if ((s[i] >= '0') && (s[i] <= '9'))
			num = s[i] - 48 + num * 10;
		else if (num > 0)
			break;
	}

	return (num * signo);
}


