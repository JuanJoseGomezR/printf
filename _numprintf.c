#include "holberton.h"
/**
  * _printfnum - prints int
  * @format: args
  * Return: int
  */
int _iprintf(va_list format)
{
	int num;

	num = _printfnum(format);

	return (num);
}
