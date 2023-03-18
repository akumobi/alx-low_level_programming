#include <stdio.h>
/**
 * main - program starts here
 * Return: program returns zero (0) when it runs successfully
 */
int main(void)
{
	char alphabets;

	while (alphabets <= 'z')
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
		alphabets++;
	}
	putchar('\n');
	return (0);
}
