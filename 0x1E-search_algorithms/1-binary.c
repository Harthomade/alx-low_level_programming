#include "search_algos.h"

/**
 * print_sub - prints the sub array
 * @array: the subarray
 * @high: highest index
 * @low: lowest index
 */
void print_sub(int *array, size_t high, size_t low)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);
}

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or
 * -1 If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high, mid;

	if (!array)
		return (-1);
	high = size - 1;
	while (low <= high)
	{
		print_sub(array, high, low);
		mid = low + (high - low) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
