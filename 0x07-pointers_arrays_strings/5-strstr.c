#include "holberton.h"
#include <stdio.h>
/**
 * *_strpbrk - seachs string
 * @s: array in
 * @accept: char to search
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j=0, c=0, s=0;

while (needle[s] != '\0')
	{
		s++;
	}
	
printf("<%d>",s);		
	
for (i = 0; haystack[i] != '\0'; i++)
	{
		c=0;
		for (j = 0; j < s; j++)
		{
			if 	((haystack[i+j] == needle [j]))
				{
				c++;	
				printf("<%d><%d>",c,i);	
			}
			else
				break;
		}			
		if (c==s)
		{
		printf("<%d><%d>",c,s);
			return (haystack + i);
		}
	}
	return (haystack);
}
