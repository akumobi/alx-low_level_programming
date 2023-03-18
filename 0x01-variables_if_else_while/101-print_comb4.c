#include <stdio.h>
/**
 * main - program starts here
 * Return: program returns zero (0) when it runs successfully
 */
int main(void)
{
	int j, k, q;

	for (j = 48; j < 58; j++)
	{
		for (k = 49; k < 58; k++)
		{
			for (q = 50; q < 58; q++)
			{
				if (q > k && k > j)
				{
					putchar(j);
					putchar(k);
					putchar(q);
					if (j != 55 || k != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
