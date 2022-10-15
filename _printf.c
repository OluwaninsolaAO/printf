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

	if (format == NULL)
		return (-1);
	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		len++;
	}
	return (len);
}
