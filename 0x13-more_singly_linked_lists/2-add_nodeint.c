#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t.
 * @head: a pointer to the address of the head.
 * @n: the integer for the new node.
 *
 * return:If the function fails - NULL, or pointer to the new node.
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
