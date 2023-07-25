#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - sssss
 * @c: sssssss
 * Return: sssssssssss
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
