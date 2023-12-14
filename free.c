#include <stdio.h>
#include <stdlib.h>
#include "monty.h"


/**
 * free_stack - Frees the memory allocated for the stack.
 * @stack: A pointer to the top of the stack.
 */
void free_stack(stack_t *stack)
{
    stack_t *temp;

    while (stack)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}
