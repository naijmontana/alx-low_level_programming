#include <stdio.h>

/**
 * main - prints name of file, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line argument.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
