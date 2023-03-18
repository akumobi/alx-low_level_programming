#include <stdio.h>
/**
 * main - program starts here
 * Return: program returns zero (0) when it runs successfully
 */
int main(void)
{
	char love;

	for (love = 'z'; love >= 'a'; love--)
	{
		putchar(love);
	}
	putchar('\n');
	return (0);
}
