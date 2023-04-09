#include <stdio.h>
#include "main.h"

/**
 * main - Function of the Program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Zero for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
