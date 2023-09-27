#include "lists.h"

/**
 * sum_listint - Calculates the sum
 * @head: Pointer
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
