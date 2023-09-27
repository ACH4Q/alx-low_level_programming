#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at
 * @head: Pointer
 * @n: integer
 * Return: A pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *harrumma;

	if (!head)
		return (NULL);

	harrumma = malloc(sizeof(listint_t));
	if (!harrumma)
		return (NULL);

	harrumma->n = n;
	harrumma->next = NULL;

	if (*head == NULL)
		*head = harrumma;
	else
	{
		listint_t *achux = *head;

		while (achux->next)
		{
			achux = achux->next;
		}

		achux->next = harrumma;
	}

	return (harrumma);
}
