#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encodes a string into 1337
 * Return: On success 1.
 * @t: array
 * On error, -1 is returned, and errno is set appropriately.
 */



char *rot13(char *t)
{
	int i, j;
	char p[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char n[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

		for (i = 0; t[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (t[i] == p[j])
				{
					t[i] = n[j];
					break;
				}
				if (t[i] == p[j])
				{
					t[i] = n[j];
					break;
				}
			}
		}

		return (t);
}
