#include <stdio.h>
#include <stdbool.h>

bool isSorted(int length, int array[]) {
	// int array[] = { 3, 5, 9, 7, 1, 4, 8 }; // unsorted test
	// int array[] = { 1, 2, 3, 4, 5, 6, 7 }; // sorted test
	// int length = 7
	int i = 0;
	int j = i + 1;

	while (i < length) {
		if (array[i] > array[j]) {
			return false;
		}
		i++;
		j = i + 1;
	}
	return true;
}

void bubbleSort() {
	int i = 0;
	int length = 7;
	bool dummyBool = false;
	int array[] = { 3, 5, 9, 7, 1, 4, 8 }; // unsorted test
	// int array[] = { 1, 2, 4, 3, 5, 6, 7 }; // sorted test
	printf("pre-sort: %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6]);
	dummyBool = isSorted(length, array);
	
	while (dummyBool != 1) {
		if (array[i] > array[i+1]) {
			int tmp = array[i];
			array[i] = array[i+1];
			array[i+1] = tmp;
		}
		i++;
		if (i == 7) {
			i = 0;
		}
		dummyBool = isSorted(length, array);
	}
	printf("Bubbles are Sorted.\n");
	printf("after-sort: %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6]);
}

int main() {
	printf("Hello World!\n");

	bubbleSort();

	return 0;
}
