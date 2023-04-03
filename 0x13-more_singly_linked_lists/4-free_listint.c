#include "lists.h"
/**
 * free_listint- frees a memory
 * @head: pointer to header
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
	}
}
