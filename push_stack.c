#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push_stack - Pushes an element onto the stack.
 * @stack: A pointer to the top of the stack.
 * @value: The value to push onto the stack.
 */
void push_stack(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
