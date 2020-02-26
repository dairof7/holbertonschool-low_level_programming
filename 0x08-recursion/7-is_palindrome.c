#include "holberton.h"
#include <stdio.h>
char *rev(char *s, char *s1);
/**
 * is_palindrome - returns 1 if the input integer is a prime number
 * @n: int number in
 * Return: the square root
 */

int is_palindrome(char *s)
{
	char *s2;
	char s3[5];
	s2 = rev(s, s3);
	printf("%s<%s>", s3,s2);
	return (0);
}
char *rev(char *s, char *s1)
{
	if (*s != '\0')
	{
		rev(s + 1, s1);
		*s1 = *s;
	}
	return (s1);
}