#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_octal - ddddd
 * @n: ssssss
 * Return: ssss
 */
int _print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
	{
		count += _print_octal(n / 8);
	}
	_putchar('0' + (n % 8));
	count++;
	return (count);
}
