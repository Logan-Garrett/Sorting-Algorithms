#include <stdlib.h>
#include <stdio.h>


void insertionSort() {
    	int array[] = {3, 5, 9, 7, 1, 4, 8};
    	int i = 0;
    	int j = i + 1;

    	printf("Start ");

    	while (i < 7) {
		while (array[j] < array[i]) {
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
        		i--;
			j = i + 1;
			printf("i: %d, j: %d\n", i, j);
		}
		i++;
		j = i + 1;
    	}
	printf("%d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6]);
}

int main() {
    	printf("-----------------\n");
    	insertionSort();

    	return 0;
}
