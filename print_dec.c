#include "main.h"

/**
 * print_dec - entry point
 * @i: a dec
 * @count: putchar count
 * Return: count
 */
int print_dec(int i, int count)
{
	count = 1;
	if (i > 9)
		count += print_int(i / 10, count);

	count += _putchar(i % 10 + '0');
	return (count);
}
