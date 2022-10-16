#include "main.h"

/**
 * print_int - entry point
 * @i: an int
 * @count: print count
 * Return: 0
 */
int print_int(int i, int count)
{
	count = 1;
	if (i > 9)
		count += print_int(i / 10, count);

	count += _putchar(i % 10 + '0');
	return (count);
}
