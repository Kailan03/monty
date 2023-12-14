#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file where the push opcode was encountered.
 */
void push(stack_t **stack, unsigned int line_number)
{
    char *arg = strtok(NULL, " \n\t\r");
    int value;

    if (!arg || !is_integer(arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = atoi(arg);
    push_stack(stack, value); /* Assume push_stack is a function to push onto the stack */
}
