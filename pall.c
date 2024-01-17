#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
