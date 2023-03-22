#include "main.h"

/**
 * print_sign - Prints sign of a value
 * @n: value
 * Return: 1 +ve, -1 -ve, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
