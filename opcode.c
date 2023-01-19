#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE 1

stack_t *head = NULL;

/**
 * push - pushes an element to the stack
 * @element: an integer
 */
void push(int element)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}

	new_node->element = element;
	new_node->prev = NULL;
	new_node->next = head;
	if (head != NULL)
	{
		head->prev = new_node;
	}
	head = new_node;
}

/**
 * pall - prints all the values on the stack
 */
void pall()
{
	stack_t *temp = head;

	while (temp != NULL)
	{
		print("%d\n", temp->element);
		temp = temp->next;
	}
}

/**
 * main - program execution
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 3 && strcmp(argv[1], "push") == 0)
	{
		int n = atoi(argv[2]);

		if (n == 0 && (argv[2][0] != '0' || strlen(agrv[2]) != 1))
		{
			fprintf(stderr, "L%d: usage: push integer\n", __LINE__);
			exit(EXIT_FAILURE);
		}
		push(n);
	}
	else if (argc == 2 && strcmp(argv[1], "pall") == 0)
	{
		pall();
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	return (0);
}
