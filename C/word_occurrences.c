#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_WORD_LEN 50

void to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int count_words(char *text) {
    int count = 0;
    int in_word = 0;
    
    for (int i = 0; text[i]; i++) {
        if (isspace(text[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    return count;
}

int main() {
    char text[1000];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int counts[MAX_WORDS] = {0};
    int unique_count = 0;
    
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;
    
    char text_copy[1000];
    strcpy(text_copy, text);
    
    printf("Total words: %d\n", count_words(text));
    
    to_lower(text_copy);
    
    char *token = strtok(text_copy, " \t\n");
    while (token != NULL) {
        int found = 0;
        for (int i = 0; i < unique_count; i++) {
            if (strcmp(words[i], token) == 0) {
                counts[i]++;
                found = 1;
                break;
            }
        }
        
        if (!found && unique_count < MAX_WORDS) {
            strcpy(words[unique_count], token);
            counts[unique_count] = 1;
            unique_count++;
        }
        
        token = strtok(NULL, " \t\n");
    }
    
    printf("Word occurrences:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%s: %d\n", words[i], counts[i]);
    }
    
    return 0;
}