#include "monty.h"
/**
 * pint - Prints the element at the top of the stack.
 * @stack: A pointer to the top of the stack.
 *  @line_number: The line number in the file where the pint opcode is.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
