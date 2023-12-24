#ifndef MAIN_H__
#define MAIN_H__

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define MEMORY_SIZE 1024

int _printf(const char *format, ...);
int _print_str(char *str);
int _print_int(int num);
int _putchar(int c);
int _put_int(int c);
int _myprintf(const char *format, ...);

#endif /* MAIN_H__ */
