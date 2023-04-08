#include <stdio.h>

/**
 * main - prints its number of argurment, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", -argc);
	return (0);
}
