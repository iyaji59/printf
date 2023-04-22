#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * get_c - char format
 * @args: argument parameters
 * Return: return success(0)
 */
int get_c(va_list args)
{
	char c = va_arg(args, int);

	put_char(c);
	return (1);
}

/**
 * print_s - string format
 * @args: arguments
 * Return: return count
 */
int print_s(va_list args)
{
	char *s = va_arg(args, char*);
	int count = 0;

	for (; *s != '\0'; s++)
	{
		put_char(*s);
		count++;
	}
	return (count);
}

/**
 * print_percent - percent format
 * @args: argument
 * Return: return success
 */
int print_percent(va_list args)
{
	put_char('%');
	return (1);
}

/**
 * _printf - produces output according to format
 * @format: output
 * Return: value of len
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int len = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += get_c(args);
					break;
				case 's':
					len += print_s(args);
					break;
				case '%':
					len += print_percent(args);
					break;
			}
		}
		else
		{
			put_char(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
