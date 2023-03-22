#include "main.h"

/**
 * _abs - absolute value of an integer
 * @c: integer
 * Return: Absolute value or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
