#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_hex_upper - ddddd
 * @n: sssss
 * Return: ssssss
 */
int _print_hex_upper(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (n / 16)
	{
		count += _print_hex_upper(n / 16);
	}
	_putchar(hex_digits[n % 16]);
	count++;
	return (count);
}
