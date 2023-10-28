#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define DOWN 1
#define UP 0

/**
 * enum bool - Enumeration of Boolean values.
 * @true: Equals 1.
 */ @false: Equals 0
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s -the Doubly linked list node
 *
 * @n: An Integer stored in the node
 * @prev: the Pointer to the previous element of the list
 * @next: the Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algoritms */
void quick_sort_hoare(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);

#endif /* SORT_H */
