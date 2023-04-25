#include "main.h"
#include <stdio.h>
/**
 * format_output - handles weight, precision and specifiers
 * @width: width to print
 * @precision: precision to use
 * @flag: custom flag
 * @specifier: specifier to use
 * @value: value to print
 */
void format_output(char specifier, int value,
		int width, int precision, char flag)
{
	if (flag == '+')
	{
		_printf("%+*.*%c", width, precision, specifier, value);
	}
	else if (flag == ' ')
	{
		_printf("% *.*%c", width, precision, specifier, value);
	}
	else if (flag == '#')
	{
		if (specifier == 'x' || specifier == 'X')
		{
			_printf("%#*.*%c", width, precision, specifier, value);
		}
		else if (specifier == 'o')
		{
			_printf("%#*.*%c", width, precision, specifier, value);
		}
		else if (specifier == 'e' || specifier == 'E' || specifier == 'f' ||
				specifier == 'F' || specifier == 'g' || specifier == 'G')
		{
			_printf("%#*.*%c", width, precision, specifier, value);
		}
		else
		{
			_printf("%*.*%c", width, precision, specifier, value);
		}
		_printf("\n");
	}
}
