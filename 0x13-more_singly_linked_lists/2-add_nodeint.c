#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t of a linked list.
 * @head: A pointer to the address of the head of the first node in the list.
 * @n: The integer for the new node to contain the data to insert in th new node.
 *
 * Return:If the function fails - NULL, or pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;
	
	return (new);
}
