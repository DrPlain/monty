#include "monty.h"

/**
 * read_execute_file - Reads and parses a file line by line and
 * executes valid opcodes
 * @fileName: File name
 * @stack: stack
 * Return: 0 on success, -1 on failure
 */

int read_execute_file(char *fileName, stack_t **stack)
{
	int size_read, line_counter = 0;
	size_t buff;
	char *line = NULL, *token = NULL;
	
	FILE *file = fopen(fileName, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: can't open file %s", fileName);
		EXIT_FAILURE;
	}
	while ((size_read = getline(&line, &buff, file)) != -1)
	{
		token = strtok(line, "\n");
		
		if (token == NULL || token[0] == '#')
		{
			line_counter++;
			continue;
		}
		line_counter++;	
		puts(token);
		printf("%d\n", line_counter);
	}
	return (0);
}

		

