#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @stack: Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _add(stack_t **stack __attribute__((unused)),
	   unsigned int line_number __attribute__((unused)))
{
	puts("add");
}

/**
 * _nop - doesn't do anything
 * @stack: Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _nop(stack_t **stack __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	puts("nop");
}

/**
 * _sub - subtracts the top element of the stack from the second
 * top element of the stack
 * @stack: Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _sub(stack_t **stack __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	puts("sub");
}

/**
 * _div - divides the 2nd top element of the stack by the top
 * @stack: Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _div(stack_t **stack __attribute__((unused)),
	   unsigned int line_number __attribute__((unused)))
{
	puts("div");
}

/**
 * _mul - multiplies the 2nd top element of the stack by the top
 * @stack: Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _mul(stack_t **stack __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	puts("mul");
}
