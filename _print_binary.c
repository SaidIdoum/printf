#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_binary - ddddddd
 * @n: qqqqqq
 * Return: qsqsqsqs
 */
int _print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
	{
		count += _print_binary(n / 2);
	}

	_putchar('0' + (n % 2));
	count++;

	return (count);
}

