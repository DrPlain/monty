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
	int size_read, line_number = 0, *ptr = NULL, num;
	size_t buff;
	char *line = NULL, *token = NULL, *value = NULL;
	op_funcs op_func;
	
	FILE *file = fopen(fileName, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: can't open file %s", fileName);
		exit(EXIT_FAILURE);
	}
	while ((size_read = getline(&line, &buff, file)) != -1)
	{
		token = strtok(line, "\n");
		if (token == NULL || token[0] == '#')
		{
			line_number++;
			continue;
		}
		
		token = strip(token);
		line_number++;
		op_func = get_opcode_func(token);
		if (op_func == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			exit(EXIT_FAILURE);

		}
		if (strstr(token, "push") != NULL)
		{
			num = parse_push(token);
			if (num == -1)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
		}
		num_global.num = num;
		op_func(stack, line_number);
	}
	free(line);
	if (fclose(file) == -1)
		exit(EXIT_FAILURE);
	return (0);
}

/**
 * get_opcode_func - Gets the function pointed to by opcode
 * @toke: monty byte code read from file
 * Return: function pointer to the opcode function
 */

op_funcs get_opcode_func(char *token)
{ 
	size_t i = 0, size_op_manual;

	instruction_t op_manual[] = {
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL},
   	};
	
	while (op_manual[i].opcode)
	{
		if (strstr(token, op_manual[i].opcode) != NULL)
		{
			return (op_manual[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * strip - removes leading whitespaces from a string
 * @str: String to be stripped
 * Return: Pointer to stripped string
 */

char *strip(char *str)
{
	char *strip_str;
	int i = 0, j = 0, idx;

	strip_str = malloc(sizeof(char) * strlen(str) + 1);
	if (strip_str == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	
	for (idx = i; str[idx] != '\0'; idx++)
	{
		strip_str[j] = str[idx];
		j++;
	}
	strip_str[j] = '\0';

	return (strip_str);
}

int parse_push(char * token)
{
	int num;
	char *value = NULL;

	token = strtok(token, " \n");
	value = strtok(NULL, " \n");
	if (value == NULL)
		return (-1);
	if (isnumber(value) == 1)
		num = atoi(value);
	else
		return (-1);
	return (num);
}

int isnumber(char *str)
{
	int i = 0, flag = 1;

	while (str[i])
	{
		if (isdigit(str[i]) == 0)
		{
			flag = 0;
			break;
		}	
		i++;
	}
	return (flag);
}
