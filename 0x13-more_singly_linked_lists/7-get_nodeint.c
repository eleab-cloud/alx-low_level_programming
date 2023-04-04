#include "lists.h"
/**
 * get_nodeint_at_index- get the element n
 * @head: pointer to head
 * @index: the index of the element
 * Return: the nth element pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;

	while (head != NULL && i <= index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
