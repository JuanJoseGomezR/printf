#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _cprintf(va_list format);
int _sprintf(va_list format);
int _dprintf(va_list format);
int _Prprintf(va_list format);
int _iprintf(va_list format);
int _bprintf(va_list format);
int _rprintf(va_list format);
int _Rprintf(va_list format);
int _uprintf(va_list format);
int _oprintf(va_list format);
int _xprintf(va_list format);
int _Xprintf(va_list format);
/**
  * struct format - List option
  * @op: pointer option
  * @f: function pointer -> list
  */
typedef struct format
{
	char *op;
	int (*f)(va_list print);
} _format;
#endif
