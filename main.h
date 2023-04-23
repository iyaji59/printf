#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - specified format for printf
 * @id: pointer of specifier
 * @f: pointer to function of format specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} con_match;
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list val);
int print_ch(va_list val);
int print_37(void);
int _strlen(char *s);
int _strlen_const(const char *s);
int *_strcpy(char *dest, char *src);
int rev_string(char *s);
#endif
