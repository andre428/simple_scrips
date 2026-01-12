#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int biggest_num(const int *nums, const int size) {
    if (size == 0) {
        printf("Error: List cannot be empty\n");
        exit(1);
    }
    
    int biggest = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }
    return biggest;
}


int main() {
    char input[10];
    printf("Enter numbers separated by spaces: ");
    fgets(input, sizeof(input), stdin);
    
    int numbers[100];
    int count = 0;

    const char *token = strtok(input, " \n");
    while (token != NULL && count < 100) {
        numbers[count++] = strtol(token, nullptr, 10);
        token = strtok(nullptr, " \n");
    }
    
    if (count == 0) {
        printf("Error: No numbers entered\n");
        return 1;
    }

    const int result = biggest_num(numbers, count);
    printf("Biggest number: %d\n", result);
    
    return 0;
}