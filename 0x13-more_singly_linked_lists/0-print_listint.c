#include "lists.h"
/**
 * print_listint - Prints all elements
 * @h: Pointer
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *harruma = h;
	int i = 0;

	while (harruma)
	{
		printf("%d\n", harruma->n);
		harruma = harruma->next;
		i++;
	}
	return (i);
}
