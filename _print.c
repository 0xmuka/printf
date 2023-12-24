#include "main.h"

/**
 * _myprintf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _myprintf(const char *format, ...)
{
int count = 0;
va_list args;

va_start(args, format);

while (*format)
{
if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
{
int num = va_arg(args, int);

char num_str[12];
sprintf(num_str, "%d", num);
count += write(1, num_str, strlen(num_str));
format += 2;
}
else
{
count += write(1, format, 1);
format++;
}
}

va_end(args);

return (count);
}
