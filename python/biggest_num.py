# Finds biggest number in a list

def biggest_num(nums: list[int]) -> int:
    if not nums:
        raise ValueError("Lista nie może być pusta")
    biggest = nums[0]
    for num in nums:
        if num > biggest:
            biggest = num
    return biggest


if __name__ == "__main__":
    numbers = input("Podaj liczby oddzielone spacjami: ")
    numbers_list = [int(num) for num in numbers.split()]
    try:
        print(biggest_num(numbers_list))
    except ValueError as e:
        print(f"Błąd: {e}")