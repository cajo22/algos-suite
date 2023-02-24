#include <stdio.h>
#include "merge_sort.h"

// Merge sort

void merge_sort_split(int array[], int left, int right);
void merge_sort_merge(int array[], int left, int middle, int right);

int merge_sort(int array[], int length)
{
	merge_sort_split(array, 0, length - 1);

	return 0;
}

void merge_sort_split(int array[], int left, int right)
{
	// Base case
	if (left < right)
	{
		int middle = left + (right - left) / 2;

		// Recursively split into two arrays until no longer possible
		merge_sort_split(array, left, middle);
		merge_sort_split(array, middle + 1, right);

		merge_sort_merge(array, left, middle, right);
	}
}

void merge_sort_merge(int array[], int left, int middle, int right)
{
	int leftLength = (middle + 1) - left;
	int rightLength = right - middle;

	int leftArray[leftLength];
	int rightArray[rightLength];

	int i, j, k;

	// Copy the data from target array into local arrays
	
	for (i = 0; i < leftLength; i++)
		leftArray[i] = array[left + i];

	for (i = 0; i < rightLength; i++)
		rightArray[i] = array[middle + i + 1];

	// Now merge the arrays
	
	for (i = 0, j = 0, k = left; k <= right; k++)
	{
		if ((i < leftLength) &&
		   (j >= rightLength || leftArray[i] <= rightArray[j]))
		{
			array[k] = leftArray[i];
			i++;
		}
		else
		{
			array[k] = rightArray[j];
			j++;
		}
	}
}

