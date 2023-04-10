#include <stdio.h>
#include "main.h"

/**
 * main - Program function
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Zero for Success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
