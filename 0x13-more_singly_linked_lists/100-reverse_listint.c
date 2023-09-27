#include "lists.h"
/**
 * reverse_listint - reverses
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *harr = NULL;
	listint_t *uma = NULL;

	while (*head)
	{
		uma = (*head)->next;
		(*head)->next = harr;
		harr = *head;
		*head = uma;
	}

	*head = harr;

	return (*head);
}
