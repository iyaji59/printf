#include <unistd.h>
#include "main.h"
/**
 * put_char - writes to stdout
 * @c: character to print
 * Return: success on 1
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}
