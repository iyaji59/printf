#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int get_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int put_char(char c);
int _printf(const char *format, ...);
#endif
