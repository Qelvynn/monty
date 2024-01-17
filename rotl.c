#include "monty.h"
/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *next;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	next = (*head)->next;
	next->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = next;
}
