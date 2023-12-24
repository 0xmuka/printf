#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
va_list args;

int count = 0;

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += _putchar(va_arg(args, int));
break;
case 's':
count += _print_str(va_arg(args, char *));
break;
case 'd':
count += _putchar(va_arg(args, int));
break;
case '%':
count += _putchar('%');
break;
default:
count += _putchar('%');
count += _putchar(*format);
}
}
else
{
count += _putchar(*format);
}
format++;
}
va_end(args);

return (count);

}
/**
 * _print_str - Prints a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int _print_str(char *str)
{
int count = 0;

if (str == NULL)
{
str = "(null)";
}

while (*str != '\0')
{
count += _putchar(*str);
str++;
}
return (count);
}
/**
 * _putchar - Writes a character to stdout
 * @c: Character to write
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(int c)
{
return (write(1, &c, 1));
}
