#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - sssssss
 * @format: sssss
 * Return: sssssssssss
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			printed_chars += _putchar(*format);
		}
		else
		{
			format++;
			switch (*format)
			{
			case 'c':
				printed_chars += _putchar(va_arg(args, int));
				break;
			case 's':
				printed_chars += _print_string(va_arg(args, char *));
				break;
			case 'd':
			case 'i':
				printed_chars += _print_number(va_arg(args, int));
				break;
			case '%':
				printed_chars += _putchar('%');
				break;
			default:
				printed_chars += _putchar('%');
				printed_chars += _putchar(*format);
				break;
			}
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}
