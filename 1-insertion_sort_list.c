#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: pointer to the doubly linked list listint_t
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;
	listint_t *marker = NULL;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	temp = *list;
	marker = *list;

	while (marker != NULL)
	{
		marker = marker->next;
		while (temp->prev && (temp->n < temp->prev->n))
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->next->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			temp->next->prev = temp;
			print_list(*list);
		}
		temp = marker;
	}
}
