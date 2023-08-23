#include <stdlib.h>
#include <stdio.h>


void insertionSort() {
    	int array[] = {14, 3, 5, 9, 7, 1, 4, 10, 8};
    	int i = 0;
    	int j = i + 1;

    	printf("Pre-Sort: ");
	printf("%d %d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);

    	while (i < 9) {
		while (array[j] < array[i]) {
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
        		i--;
			j = i + 1;
			// printf("i: %d, j: %d\n", array[i], array[j]);
		}
		i++;
		j = i + 1;
    	}
	printf("Post-Sort: ");
	printf("%d %d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
}

int main() {
    	printf("-----------------\n");
    	insertionSort();

    	return 0;
}
