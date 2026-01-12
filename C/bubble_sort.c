#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *array, int n) {
    while (n > 1) {
        int new_n = 0;
        for (int i = 1; i < n; i++) {
            if (array[i - 1] > array[i]) {
                int temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
                new_n = i;
            }
        }
        n = new_n;
    }
}

int main() {
    int list_len;
    printf("Enter list length: ");
    
    if (scanf("%d", &list_len) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    if (list_len <= 0) {
        printf("List length must be greater than zero\n");
        return 1;
    }
    
    int *bubble_list = malloc(list_len * sizeof(int));
    
    srand(time(NULL));
    printf("List to sort: ");
    for (int i = 0; i < list_len; i++) {
        bubble_list[i] = rand() % 333 + 1;
        printf("%d ", bubble_list[i]);
    }
    printf("\n");
    
    printf("--------------------\n");
    bubble_sort(bubble_list, list_len);
    
    printf("Sorted list: ");
    for (int i = 0; i < list_len; i++) {
        printf("%d ", bubble_list[i]);
    }
    printf("\n");
    
    free(bubble_list);
    return 0;
}