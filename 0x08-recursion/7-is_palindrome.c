#include "holberton.h"
#include <stdio.h>
int _strlen_recursion(char *s);

int compare(char *s1, char *s2);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: char pointer
 * Return: 1 if a string is palindrome
 */

int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);
	int r = 0;

	r = compare(s, (s + size - 1));

	return (r);
}
/**
 * _strlen_recursion - return the size of string
 * @s: char pointer
 * Return: integer with size
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
/**
 * compare - return the size of string
 * @s1: char pointer
 * @s2: char pointer
 * Return: integer with size
 */
int compare(char *s1, char *s2)
{
	if (s1 > s2)
		return (1);
	if (*s1 != *s2)
		return (0);

	return (compare(s1 + 1, s2 - 1));
}
