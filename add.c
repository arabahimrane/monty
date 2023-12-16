#include "monty.h"

/**
 * f_Add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_Add(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (h == NULL || h->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h->next->n += h->n;
	*head = h->next;
	free(h);
}
