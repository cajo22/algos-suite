#include <stdio.h>
#include "merge_sort.h"

int main(int argc, char **argv)
{

	int array[] = { 18, 13, 32, 28, 54, 30, 22, 11, 49, 37 };
	int length = 10;

	merge_sort(array, length);

	for (int i = 0; i < length; i++)
		printf("%d ", array[i]);
	printf("\n");	

	return 0;
}

