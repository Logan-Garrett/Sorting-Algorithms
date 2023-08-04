#include <stdlib.h>
#include <stdio.h>


void insertionSort() {
    int array[] = {3, 5, 9, 7, 10, 13, 1};
    int i = 0;
    int j = i + 1;

    printf("Start");

    while (i <= 6) {
        printf(" -> ");
        printf("%d", array[i]);
        i++;
    }
}

int main() {
    printf("-----------------\n");
    insertionSort();
    return 0;
}