#include "holberton.h"
/**
 * _bprintf - convert into binaries
 * @format: unsd int to binary
 * Return: binary length
 */
int _bprintf(va_list format)
{
	unsigned int binary[32];
	unsigned int num;
	unsigned int count = 0;
	int i = 0;

	num = va_arg(format, unsigned int);

	if (num <= 1)
	{
		_putchar(num + '0');
		count++;
	}
	else
	{
		for (i = 0; num > 0; i++)
		{
			binary[i] = num % 2;
			num /= 2;
		}
		for (i = i - 1; i >= 0; i--)
		{
			write(1, &binary, 1);
			count++;
		}
	}
		return (count);
}
/**
  * _rprintf - prints reverse string
  * @format: rev string
  * Return: int
  */
int _rprintf(va_list format)
{
	char *store;
	int i;
	int len = 0;

	store = va_arg(format, char *);

	for (i = 0; store[i]; i++)
	{
	}
	len = i;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(store[i]);
		i--;
	}
	return (len);
}
