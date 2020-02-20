#include "holberton.h"
/**
 * _strcmp - compare strings
 * @s1: array
 * @s2: array
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i=0;

	while ((s1[i] == s2[i]) && (s1[i] == '\0') && (s1[i] == '\0'))
	i++;

	return (s1[i]-s2[i]);
}
