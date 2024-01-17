#include "monty.h"
/**
 * f_div - divides the top two elements of the stack
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, quotient;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	quotient = temp->next->n / temp->n;
	temp->next->n = quotient;
	*head = temp->next;
	free(temp);
}
