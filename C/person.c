#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char surname[50];
    int age;
} Person;

Person person_create(const char *name, const char *surname, int age) {
    Person p;
    strncpy(p.name, name, 49);
    p.name[49] = '\0';
    strncpy(p.surname, surname, 49);
    p.surname[49] = '\0';
    p.age = age;
    return p;
}

void person_basic_info(Person *p, char *buffer, size_t size) {
    snprintf(buffer, size, "My name is %s %s and I am %d years old.", 
             p->name, p->surname, p->age);
}

int main() {
    Person person = person_create("Marek", "Zegarek", 33);
    
    char info[200];
    person_basic_info(&person, info, sizeof(info));
    
    printf("%s\n", info);
    
    return 0;
}