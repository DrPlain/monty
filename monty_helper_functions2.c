/*#include "monty.h"
/**
 * execute_opcode - executes op_codes
 * @op_func: opcode function to be executed
 * @token: opcode
 * @line_number: Line number
 * Return: Argument to o
 *

int execute_opcode(op_funcs op_func, char *token, unsigned int line_number)
{
	int num;
	if (op_func == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		exit(EXIT_FAILURE);
	}
	if (strstr(token, "push") != NULL)
	{
		num = get_push_arg(token);
		if (num == -1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}*/
