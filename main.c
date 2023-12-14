#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
 * main - Entry point
 * @argc: command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	instruction_t instructions[] = {
	{"push", push},
	{"pall", pall},
	/* Add more opcodes and corresponding functions as needed */
	{NULL, NULL}};

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		execute_instruction(line, &stack, instructions, line_number);
	}

	free_stack(stack);
	free(line);
	fclose(file);
	return (0);
}
