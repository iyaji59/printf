#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 * Return: c
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
 * _strlen_const - strlen for constant
 * @s: char pointer
 * Return: c
 */
int _strlen_const(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
