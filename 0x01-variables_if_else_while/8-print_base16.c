#include <stdio.h>
/**
 * main - program starts here
 * Return: program returns zero (0) when it runs successfully
 */
int main(void)
{
	int a;
	char we;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (we = 'a'; we <= 'f'; we++)
	{
		putchar(we);
	}
	putchar('\n');
	return (0);
}
