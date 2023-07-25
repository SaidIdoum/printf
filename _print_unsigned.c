#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_unsigned - dsssssss
 * @n: sssssssss
 * Return: sssss
 */
int _print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += _print_unsigned(n / 10);
	}
	_putchar('0' + (n % 10));
	count++;
	return (count);
}
