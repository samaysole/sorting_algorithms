#ifndef SORTING_H
#define SORTING_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap_int(int *array, size_t a, size_t b);
void selection_sort(int *array, size_t size);
void swap_int1(int *array, int a, int b);
void quick_sort(int *array, size_t size);
void recursive_quick_sort(int *array, size_t size, int start, int end);
size_t partition(int *array, size_t size, int start, int end);
void shell_sort(int *array, size_t size);

#endif
