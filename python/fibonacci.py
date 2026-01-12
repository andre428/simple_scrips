# Shows a list of fibonacci numbers on a given range

def fibonacci(n: int) -> list[int]:
    if n <= 0:
        raise ValueError("Musisz podać liczbę całkowitą większą od zera")

    if n == 1:
        return [0]

    listed = [0, 1]
    for _ in range(n - 2):
        listed.append(listed[-1] + listed[-2])

    return listed


if __name__ == "__main__":
    try:
        count = int(input(f"Podaj długość ciągu: "))
        print(fibonacci(count))
    except ValueError as e:
        print(f"Error: {e}")