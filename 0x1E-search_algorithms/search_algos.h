#ifndef _SEARCH
#define _SEARCH

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - single list list
 * @n: Integer
 * @index: Pointer to the next node
 *
 * Description: structure of single linked list
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - express lane single linked list
 * @n: Integer
 * @index: Index of node
 * @next: next node
 * @express: next node in express lane
 *
 * Description: single linked list with express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* function declarations */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
