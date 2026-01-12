# Checking if a number is prime

def am_i_prime(number: int) -> str:
    if number < 2:
        return f"{number} jest poza zakresem sprawdzanych liczb"

    max_range = int(number * .5 + 1)

    for i in range(2, max_range):
        if number % i == 0:
            return f"{number} nie jest liczbą pierwszą"
    return f"{number} jest liczbą pierwszą"


if __name__ == '__main__':
    try:
        num = int(input("Podaj liczbę: "))
        result = am_i_prime(num)
        print(result)
    except ValueError as e:
        print(f"Błąd: {e}")