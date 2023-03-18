#include <stdio.h>
/**
 * main - program starts here
 * Return: program returns zero (0) when it runs successfully
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
