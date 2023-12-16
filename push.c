#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0;

	if (!bus.arg || !isdigit(bus.arg[0]) && bus.arg[0] != '-' && bus.arg[0] != '+')
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	while (bus.arg[j] == ' ' || bus.arg[j] == '\t')
		j++;

	if (!isdigit(bus.arg[j]) && bus.arg[j] != '-' && bus.arg[j] != '+')
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, n);
	else
		addqueue(head, n);
}
