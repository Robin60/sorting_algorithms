#include <stdlib.h>
#include <stdio.h>

#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to previous element of list
 * @next: Pointter to next element of list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void _qsort(int *array, int left, int right, size_t size);
size_t partition(int *array, int left, int right, size_t size);
void swap(int *array, int left, int right);

#endif
