# Person class holding basic person data

class Person:
    def __init__(self, name: str, surname: str, age: int):
        self.name = name
        self.surname = surname
        self.age = age

    def my_basic_info(self):
        return f"Nazywam się {self.name} {self.surname} i mam {self.age} lat."


if __name__ == "__main__":
    person = Person("Marek", "Zegarek", 33)
    print(person.my_basic_info())