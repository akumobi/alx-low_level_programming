#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: value of destination string
 * @src: value of source string
 * Return: void is returned
 */

char *_strcat(char *dest, char *src)
{
	int agbado;
	int blu;

	agbado = 0;
	while (dest[agbado] != '\0')
	{
		agbado++;
	}
	blu = 0;
	while (src[blu] != '\0')
	{
		dest[agbado] = src[blu];
		agbado++;
		blu++;
	}

	dest[agbado] = '\0';
	return (dest);
}
