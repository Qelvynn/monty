#include "monty.h"
/**
 * f_sub - subtracts the top element of the stack from the second top element
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int diff, len;

	temp = *head;
	for (len = 0; temp != NULL; len++)
		temp = temp->next;
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	diff = temp->next->n - temp->n;
	temp->next->n = diff;
	*head = temp->next;
	free(temp);
}
