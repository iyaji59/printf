#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * char_buff - format and buffer
 * @format: specifier
 * @buffer: temporary storage
 * @len: length
 */
void char_buff(char **format, char *buffer, unsigned int *len)
{
		while (**format != 0 && **format != '%')
		{
			buffer[(*len)++] = **format;
			(*format)++;
		}
}
/**
 * arg - arguments function
 * @list: arguments list
 * @format: arguments format
 * Return: string str
 */
char *arg(va_list list, char *format)
{
	static char str[2] = {0, 0};

	switch (*format)
	{
	case '%':
		str[0] = '%';
		return (str);
	case 'c':
		str[0] = (char) va_arg(list, int);
		return (str);
	case 's':
		return (va_arg(list, char *));
	}
	return (NULL);
}
/**
 * _printf - prints to stdout
 * @format: format specifier
 * Return: return p
 */
int _printf(char *format, ...)
{
	char *tmp, buffer[1024];
	unsigned int len = 0, bufflen = 0;
	unsigned long int p = 0;
	va_list list;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			tmp = arg(list, format);
			format++;
			while (*tmp)
				buffer[len++] = *tmp++;
		}
		else
			char_buff(&format, buffer, &len);
	}
	write(1, buffer, len);
	p += len;
	return (p);
}
