#include <stdio.h>

void is_prime(int num) {
    if (num < 2) {
        printf("%d is out of range\n", num);
        return;
    }
    
    int max_range = num / 2 + 1;
    for (int i = 2; i < max_range; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number\n", num);
            return;
        }
    }
    printf("Yes, %d is a prime number\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    is_prime(num);
    return 0;
}