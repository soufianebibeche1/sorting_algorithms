#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 *                       using the Insertion sort algorithm
 * @list: Pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	/* Check if the list empty or has one element */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	/* Init the current to the second element of list */
	current = (*list)->next;

	while (current)
	{
		temp = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			/* Swap the next and previous pointers of the current node */
			current->next = current->prev;
			current->prev = current->prev->prev;

			/* Adjust the previous pointer of the current node */
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;
			current->next->prev = current;

			/* Print list after each swap */
			print_list(*list);
		}

		/* Move to the next element*/
		current = temp;
	}
}
