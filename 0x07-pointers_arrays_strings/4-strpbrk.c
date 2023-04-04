#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Zero 0 when Successful
 */
char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
		if (*s == accept[z])
		return (s);
		}
	s++;
	}

return ('\0');
}
