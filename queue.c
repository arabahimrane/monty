#include "monty.h"

/**
 * f_queue - sets the format of the data to a queue (FIFO).
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		stack_t *last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new_node;
		new_node->prev = last;
	}
}
