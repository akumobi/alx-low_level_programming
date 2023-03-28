#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int blu = 0;
	int buhari = 0;

	while (*(src + blu) != '\0')
	{
		blu++;
	}
	for ( ; buhari < blu ; buhari++)
	{
		dest[buhair] = src[buhari];
	}
	dest[blu] = '\0';
	return (dest);
}
