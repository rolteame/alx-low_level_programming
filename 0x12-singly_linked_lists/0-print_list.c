#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	int size_t count;
	count = 0;

	while (head != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}
