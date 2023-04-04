#include "lists.h"
/**
 * sum_listint- sums the elements of a list
 * @head: a pointer to head element
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
