# Calculates the factorial of a number

def factorial(number: int) -> int:
    if number < 0:
        raise ValueError("Liczba musi być nieujemna!")
    if number <= 1:
        return 1
    return number * factorial(number - 1)


if __name__ == '__main__':
    try:
        num = int(input("Podaj liczbę: "))
        result = factorial(num)
        print(f"Silnia z {num} wynosi {result}")
    except ValueError as e:
        print(f"Error: {e}")
    except Exception as e:
        print(f"Invalid input: {e}")