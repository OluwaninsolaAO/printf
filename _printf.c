#include "main.h"

/**
 * _printf - entry point
 * @format: a const. char
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list ap;
	int spec_lock = 0;

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
			}
			len += spec_lock;
		}
		else
		{
			len +=_putchar(format[i]);
		}
	}
	va_end(ap);
	return (len);
}
