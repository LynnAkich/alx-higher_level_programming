#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: Pointer to head pf linked list.
 * @number: number to insert
 * Author - Lynn Akich
 * Return: If function fails - NULL.
 * Otherwise point to new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new-> = number;

	if (node == Null || node->n >= number)
	{
		new->next - node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node-.next;

	new->next = node->next;
	node->next = new;

	return (new);
}
