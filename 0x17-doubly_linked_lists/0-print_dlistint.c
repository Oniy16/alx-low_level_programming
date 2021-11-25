#include "lists.h"

/**
 * print_dlistint - prints all elements dlistint_t list
 * @h: list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
