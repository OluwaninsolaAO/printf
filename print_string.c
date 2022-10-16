#include "main.h"

/**
 * print_string - prints string
 * @a: passed value
 * Return: len
 */
int print_string(char *a)
{
	int len = 0;

	while (a[len] != '\0')
		len += _putchar(a[len]);

	return (len);
}
