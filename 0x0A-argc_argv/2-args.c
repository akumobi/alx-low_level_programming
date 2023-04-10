#include <stdio.h>
#include "main.h"

/**
 * main - Program Function
 * @argc: Argument Counter
 * @argv: Argument Vector
 * Return: Zero for Success
 */

int main(int argc, char *argv[])
{
	int blu;

	for (blu = 0; blu < argc; blu++)
	{
		printf("%s\n", argv[blu]);
	}
	return (0);
}
