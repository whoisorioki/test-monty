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
