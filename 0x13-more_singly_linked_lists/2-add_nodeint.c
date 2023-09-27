#include "lists.h"
/**
 * add_nodeint - Adds a new node
 * @head: Pointer to a pointer
 * @n: Int
 * Return: Pointer to the newly added node (the head of the list).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *harruma = malloc(sizeof(listint_t));

	if (!harruma)
		return (NULL);

	harruma->n = n,	harruma->next = *head, *head = harruma;
	return (harruma);
}
