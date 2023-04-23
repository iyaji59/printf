#include "main.h"
/**
 * _putchar - prints c to stdout
 * @c: character to print out
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
