# Counts the number of words in a text and the number of times each word appears

def count_words(sentence: str) -> int:
    sentence = sentence.lower()
    return len(sentence.split())


def count_word_occurrences(text: str) -> dict[str, int]:
    text = text.lower()
    occurrences = text.split()

    word_count = {}
    for word in occurrences:
        word_count[word] = word_count.get(word, 0) + 1

    return word_count


if __name__ == "__main__":
    text = input("Podaj tekst: ")
    print(f"W podanym tekscie jest {count_words(text)} słów")

    word_counts = count_word_occurrences(text)
    print(f"Rozkład wystąpień słów w tekście:")
    for word, count in word_counts.items():
        print(f"{word}: {count}")