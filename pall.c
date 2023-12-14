#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * pall - Prints all values on the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file where the pall opcode was encountered.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number; /* Unused parameter */
	
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
