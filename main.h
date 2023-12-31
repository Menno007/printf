#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE (sizeof(char) * 1024)

int _printf(const char *format, ...);
int print_char(char c);
int print_string(const char *str);
int print_percent(void);
int print_format(char format, va_list args);
int print_int(int integer);

#endif
