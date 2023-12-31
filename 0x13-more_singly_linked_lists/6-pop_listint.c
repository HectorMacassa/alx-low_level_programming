#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: A pointer to the pointer to the head of the list
 *
 * Return: The head nodes data(n),
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
