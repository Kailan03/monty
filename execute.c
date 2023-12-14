#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * execute_instruction - Executes the given opcode(instruction).
 * @line: The line that contain the opcode.
 * @stack: A pointer to the top of the stack.
 * @instructions: An array of instruction_t structures.
 * @line_number: The line number in the file.
 */
void execute_instruction(char *line, stack_t **stack,
		instruction_t instructions[], unsigned int line_number)
{
	char *opcode;
	int i;

	opcode = strtok(line, " \n\t\r");
	if (!opcode)
		return;

	for (i = 0; instructions[i].opcode; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
