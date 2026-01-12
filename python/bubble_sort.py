# Bubble sorter algorithm

import random

# Create a list of random numbers
list_len = input("Podaj długość listy do sortowania: ")
bubble_list = []

try:
    list_len = int(list_len)
except ValueError:
    print("Podana wartość nie jest liczbą całkowitą")
    exit(1)

if list_len <= 0:
    print("Długość listy musi być większa od zera")
    exit(1)

for i in range(0, list_len):
    n = random.randint(1, 333)
    bubble_list.append(n)

print(f"Lista do posortowania: {bubble_list}")


# Main sorting function
def bubble_sort(array: list[int]) -> list[int]:
    n = len(array)
    while n > 1:
        new_n = 0
        for i in range(1, n):
            if array[i - 1] > array[i]:
                array[i - 1], array[i] = array[i], array[i - 1]
                new_n = i
        n = new_n
    return array


if __name__ == "__main__":
    print("  ")
    print(20 * '-')
    print(bubble_sort(bubble_list))