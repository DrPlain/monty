#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack - head node of stack linked list
 * @line_number: opcode line number
 * Return: Nothing
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *start = NULL;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = num_global.num;
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*stack = new;
		top = new;
		//printf("%d\n", (*stack)->n);
	}
	else
	{
		top->next = new;
		new->next = NULL;
		new->prev = top;
		top = new;
	}

	/*while (top)
	{
		printf("%d\n", top->n);
		top = top->prev;
	}*/
}

/**
 * _pall - prints all the values on the stack starting from the top
 * @stack - Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	while (top)
	{
		printf("%d\n", top->n);
		top = top->prev;
	}
}
/**
 * _pint - prints the top value followed by new line
 * @stack - Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	puts("pint");
}

/**
 * _pop - removes the top element of the stack
 * @stack - Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	puts("pop");
}

/**
 * _swap - swaps the top two elements of the stack
 * @stack - Address of stack
 * @line_number: opcode line number
 * Return: Nothing
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	puts("swap");
}
