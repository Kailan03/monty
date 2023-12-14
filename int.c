#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * is_integer - Checks if a string represents a valid integer.
 * @str: The string to check.
 * Return: 1 if the string is a valid integer, 0 otherwise.
 */
int is_integer(char *str)
{
    if (!str)
        return (0);

    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }

    return (1);
}
