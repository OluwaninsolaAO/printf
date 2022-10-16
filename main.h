#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

int print_char(char a);
int print_string(char *a);
int print_percentage(char a);
int print_int(int i, int count);
int print_dec(int i, int count);

#endif  /* MAIN_H */
