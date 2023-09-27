#include "lists.h"
/**
 * pop_listint - R
 * @head: Pointer
 * Return: Int
 */
int pop_listint(listint_t **head)
{
listint_t *harrumma = *head;
int value;

	if (!head || !(*head))
	{
		return (0);
	}


	value = harrumma->n;

	*head = harrumma->next;
	harrumma->next = NULL;
	free(harrumma);

	return (value);
}
