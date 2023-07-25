#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _print_number - ss
 * @n: ssssss
 * Return: ssssssssss
 */
int _print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += _print_number(num / 10);
	}

	_putchar('0' + (num % 10));
	count++;

	return (count);
}
