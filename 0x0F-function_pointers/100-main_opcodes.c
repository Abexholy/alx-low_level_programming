#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the opcodes of itself only.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int byte, edex;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (edex = 0; edex < byte; edex++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (edex == byte - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
