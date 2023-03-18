#include <stdio.h>
/**
 * main - program starts here
 * Return: program returns zero (0) when it runs successfully
 */
int main(void)
{
	char alphabets;

	alphabets = 'a';
	while ('a' <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	return (0);
}
