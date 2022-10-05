#include "monty.h"
stack_t *top = NULL;

/**
 * main - driver function for monty program
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */

/**
 * 1: Write a c program to be compiled with the name monty
 * 2: The program takes only one argument, a file name
 * 3: The file will contain opcodes which are function names
 * 4: Create a loop to read the file line by line
 * 5: After reading a line, parse it to search for a function name(opcode)
 * 6: Tokenize the function name
 * 7: If token is a valid function name(opcode),
 * call the function associated with it
 * 8: Empty lines or lines starting with '#' should be neglected
 * 9: Continue the loop until EOF is reached
 * 10: Free all dynamically allocated  memories
 */

int main(int ac, char *av[])
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		EXIT_FAILURE;
	}
	if (read_execute_file(av[1], &stack) == -1)
		EXIT_FAILURE;
	return (0);
}
