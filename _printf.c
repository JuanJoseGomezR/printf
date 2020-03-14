#include "holberton.h"
/**
  * _cprintf - prints char format
  * @format: type of format
  * Return: length
  */
int _cprintf(va_list format)
{
	return(write(1, &c, 1));
}
/**
  * _sprintf - print string format
  * @format: string
  * Return: length
  */
int _sprintf(va_list format)
{
	int i;
	char *ptr;

	ptr = va_arg(format, char *);

	for (i = 0; s[i]; i++)
	{
	write(1, s, 1);
		s++;
	}
	return (i);
}
int _iprintf(va_list format)
{
	char negativ;
	int i, count, num;
	i = va_arg(format, int);
	num = i;
	count = 0;
	negativ = '-';

	if (i < 0)
	{
		count++;
		write(1, &negativ, 1);
		i = -i;
	}
	while (num != 0)
	{
		num = num / 10;
		count += 1;
	}
	_iprintf((unsigned int)i);
	return (count);
}
/**
 * _printf - function of option struct
 * @format: parameter pointer
 * Return: option of struct
 */
int _printf(const char *format, ...)
{
	_format option[] = {
		{ "c", _cprintf},
		{ "s", _sprintf},
		{ "d", _dprintf},
		{ "%", _Prprintf},
		{ "i", _iprintf},
		{ "b", _bprintf},
		{ "r", _rprintf},
		{ "R", _Rprintf},
		{ "u", _uprintf},
		{ "o", _oprintf},
		{ "x", _xprintf},
		{ "X", _Xprintf},
	};
}
