#include <unistd.h>
/**
 * _write - print character
 * @c: The character to print
 * Return: C
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
