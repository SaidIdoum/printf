#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_hex_lower - dddddd
 * @n: pae
 * Return: ssss
 */
int _print_hex_lower(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n / 16)
	{
		count += _print_hex_lower(n / 16);
	}

	_putchar(hex_digits[n % 16]);
	count++;
	return (count);
}
