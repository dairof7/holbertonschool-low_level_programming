#include "holberton.h"
/**
 * cap_string - capitalizes all words
 * Return: On success 1.
 * @t: array
 * On error, -1 is returned, and errno is set appropriately.
 */



char *cap_string(char *t)
{
	int i, sw = 1, j;
	char separator[] = {" \t\n,;.!?\"(){}"};

	for (i = 0; t[i] != '\0'; i++)
	{
		if ((t[i] >= 'a') && (t[i] <= 'z') && (sw == 1))
			t[i] = t[i] - 32;
		sw = 0;

		for (j = 0; j <= 12; j++)
		{
			if (t[i] == separator[j])
				sw = 1;
		}
	}

	return (t);
}
