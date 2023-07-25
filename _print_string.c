#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_string - ssss
 * @str: ssssss
 * Return: Nsssssssss
 */
int _print_string(char *str)
{
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		printed_chars++;
	}
	return (printed_chars);
}
