#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * Return: On success 1.
 * @t: array
 * On error, -1 is returned, and errno is set appropriately.
 */



char *leet(char *t)
{
int i, j;
char p[] = {"AaEeOoTtLl"};
char n[] = {"4433007711"};
	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (t[i] == p[j])
			t[i] = n[j];
		}
	}
	return (t);
}
