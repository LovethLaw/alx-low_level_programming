#include <stdio.h>
#include "main.h"
/**
 * main - check the name of the program
 * @argc: The number of arguments
 * @argv: An array containing the program command line
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
