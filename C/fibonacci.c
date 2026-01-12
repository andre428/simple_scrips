#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n, int *result, int *size) {
    if (n <= 0) {
        printf("Number must be positive\n");
        *size = 0;
        return;
    }
    
    if (n == 1) {
        result[0] = 0;
        *size = 1;
        return;
    }
    
    result[0] = 0;
    result[1] = 1;
    
    for (int i = 2; i < n; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }
    
    *size = n;
}

int main() {
    int count;
    printf("Enter sequence length: ");
    
    if (scanf("%d", &count) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    if (count <= 0) {
        printf("Error: Number must be positive\n");
        return 1;
    }
    
    int *result = malloc(count * sizeof(int));
    int size;
    
    fibonacci(count, result, &size);
    
    printf("Fibonacci sequence: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    free(result);
    return 0;
}