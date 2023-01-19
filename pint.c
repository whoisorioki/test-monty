#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

stack_t *head;

/**
 * pint - prints the value at the top of the stack
 */
void pint()
{
	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}

/**
 * main - program execution
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 2 && strcmp(argv[1], "pint") == 0)
	{
		pint();
	}
	return (0);
}	
