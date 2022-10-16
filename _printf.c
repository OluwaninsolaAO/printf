#include "main.h"

/**
 * _printf - entry point
 * @format: a const. char
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, len = 0, spec_lock = 0;
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (spec_lock)
		{
			spec_lock = 0;
			continue;
		}
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					spec_lock += print_char((char) va_arg(ap, int));
					break;
				case 's':
					spec_lock += print_string(va_arg(ap, char*));
					break;
				case '%':
					spec_lock += print_percentage((char) va_arg(ap, int));
					break;
				case 'i':
					spec_lock += print_int(va_arg(ap, int), 0);
					break;
				case 'd':
					spec_lock += print_dec(va_arg(ap, int), 0);
					break;
			}
			len += spec_lock;
		}
		else
		{
			len += _putchar(format[i]);
		}
	}
	va_end(ap);
	return (len);
}
