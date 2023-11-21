#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list
 * @head: A pointer to the head of the list
 * @index: The index of node starting at 0
 *
 * Return: A pointer to the nth node
 * or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

	return ((index == 0) ? head : NULL);
}
