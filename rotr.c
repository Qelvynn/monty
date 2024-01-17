#include "monty.h"
/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */
void f_rotr(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
